
#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "decode.h"
#include "types.h"

int main (int argc, char* argv[])     
{
    if ( argc == 1)                //Condition to check if command line arguments passed or not.
    {
	printf("ERROR: no arguments passed.\nFor encoding usage: ./a.out -e beautiful.bmp secret.txt\nFor decoding usage: ./a.out -d stego.bmp");
    }
    //Function to check the operation choosen by user.If user choose encoding then this condition is true.
    else if (check_operation_type (argv) == e_encode)   
    {
	printf("INFO: User choosen encode.\n");
	EncodeInfo encinfo;                            //assign variable to the structure.
	//Function to validate the arguments passed and then assign the structure variables to the arguments passed.
	if (read_and_validate_encode_args (argv, &encinfo) == e_success) 
	{
	    printf("INFO: Read and validate is done successsfully.\n");
	    printf("INFO: Opening required files.\n");
	    do_encoding (&encinfo);    //Function call to perform encoding.
	}
	else
	    printf("ERROR: Read and validate is failed.\n");
    }
    //condition true when the user choose decoding operation.Function call to check operation.
    else if (check_operation_type (argv) == e_decode)  
    {
	printf ("INFO: User choosen decode.\n");
	DecodeInfo decinfo;     //assign variable to the structure.
	if ( read_and_validate_decode_args (argv, &decinfo) == e_success)   //Function to read, validate arguments.
	{
	    printf("INFO: Read and validate is successsful.\n");
	    do_decoding (&decinfo, argv);   //Function call to perform decoding.
	}
	else
	{
	    printf("ERROR: Read and validate is failed.\n");
	}  
    } 
    else if (check_operation_type (argv) == e_unsupported)  //condition true if user choose neither encode nor decode.
    {
	printf("ERROR: Please choose a valid option.\n-e -> Encode\n-d -> Decode\n");     
	return 0;
    }
}
OperationType check_operation_type (char *argv[])    //Function definition to check the operation choosen.
{
    if (strcmp (argv[1], "-e") == 0)      
	return e_encode;
    else if (strcmp (argv[1], "-d") == 0)  
	return e_decode;
    else
	return e_unsupported;             
}
//Function definition where we check the arguments and accordingly assign the variables declared in structure.
Status read_and_validate_encode_args (char *argv[], EncodeInfo * encinfo)   
{
    if (argv[2] != NULL)
    {
	if (strchr (argv[2], '.') == 0)   //To check if the user has passed .bmp file or not.
	{
	    printf("ERROR: Please pass .bmp file as source.\n");
	    return e_failure;
	}
	else if (strcmp (strchr (argv[2], '.'), ".bmp") == 0)    //To check user has passed .bmp file or not.
	{
	    encinfo -> src_image_fname = argv[2];
	}
	else
	{
	    printf("ERROR: Please pass source file.\n");
	    return e_failure;
	}
    }
    else 
    {
	printf("ERROR: Please pass beautiful.bmp (Source file.)\n");
	return e_failure;
    }
    if (argv[3] != NULL)        //Condition to check user has passed the secret file or not.
	encinfo -> secret_fname = argv[3];     
    else
    {	printf("ERROR: Please pass secret file\n");
	return e_failure;
    }
    if (argv[4] != NULL)     //Check the output file name.
    {
	if (strchr (argv[4], '.') == NULL)  //If user did not pass the extension along with the name of o/p file assign .bmp
	{
	    encinfo -> stego_image_fname = strcat (argv[4], ".bmp");
	}
	else               //If user passed extension also then assign the complete name provided as output file name.
	{
	    encinfo -> stego_image_fname = argv[4];
	}
    }
    else      //Condition when no argument is passed for the output file name.
    {
	encinfo -> stego_image_fname = "stego.bmp";   //default file names stego.bmp will be created.
    }
    return e_success;
}

//Function to read and validate the arguments when user choose decoding operation.
Status read_and_validate_decode_args (char *argv[], DecodeInfo * decinfo)
{
    printf("INFO: Opening required files.\n");
    if (argv[2] != NULL)        //COndition to check the source file name.
    {
	if (strchr (argv[2], '.') == 0)   //To check if the user has passed .bmp file or not.
	{
	    printf("ERROR: Please pass .bmp file as source.\n");
	    return e_failure;
	}
	else if (strcmp (strchr (argv[2], '.'), ".bmp") == 0)   //To check if the user has passed .bmp file or not.
	{
	    decinfo -> src_image_fname = argv[2];   //if user pass .bmp as file assign it to the varible. 
	}
	else
	{ 
	    printf("ERROR: Please pass .bmp file as source.\n");
	    return e_failure;
	}
    }
    else     //COndition true if no source file passed.
    {
	printf("ERROR: Please pass .bmp file as source.\n");    
	return e_failure;
    }
    return e_success;
}
