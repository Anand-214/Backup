#include <stdio.h>
#include <string.h>
#include "decode.h"
#include "types.h"
#include "common.h"

//FUnction definition to perform decoding operation.
Status do_decoding (DecodeInfo *decInfo, char* argv[])    
{
    //All the function calls are inside if condition and we print confirmation message when the condition is true.
    //Function call to open files.
    if ( open_files_decode (decInfo) == e_success)
    {
	printf("INFO: Opening Files was successful.\n");
    }
    else   //else for error handling.
    {	
	printf("ERROR: Open files was failed.\n");
	return e_failure;
    }
    //Function call to decode the magic string.
    if (decode_magic_string (decInfo) == e_success)
    {
	printf("INFO: Magic String decoding Successful.\n");
    }
    else
    {
	printf("ERROR: Magic string decoding failed.\n");
	return e_failure;
    }
    //Function call to decode extension size.
    if ( decode_secret_file_extn_size (decInfo) == e_success)
    {
	printf("INFO: Secret file extension size decoded.\n");
    }
    else
    {
	printf("ERROR: Secret file extension size decoding failed.\n");
	return e_failure;
    }
    //Function call to decode the extension name. 
    if (decode_secret_file_extn (decInfo, argv) == e_success)
    {
	printf("INFO: Secret file extension decoded.\n");
    }
    else
    {
	printf("ERROR: Secret file extension decoding failed.\n");
	return e_failure;
    }
    //FUnction call to decode the number of characters present in the actual secret message..
    if (decode_secret_file_size (decInfo) == e_success)
    {
	printf("INFO: Secret file size decoded.\n");
    }
    else
    {
	printf("ERROR: Secret file size decoding failed.\n");
	return e_failure;
    }
    //Function call to decode the actual message data.
    if (decode_secret_file_data (decInfo) == e_success)
    {
	printf("INFO: Secret file decoded.\n");
    }
    else
    {
	printf("ERROR: Secret file decoding failed.\n");
	return e_failure;
    }
    printf("INFO: ##Decoding done successfully.##");
}
//FUnction definition to open the files mentioned in command line arguments.
Status open_files_decode (DecodeInfo *decInfo)
{
    // Src Image file
    decInfo -> fptr_src_image = fopen(decInfo -> src_image_fname, "r");  //open file in read mode.
    printf("INFO: Opened %s file.\n", decInfo -> src_image_fname);
    // Do Error handling
    if (decInfo -> fptr_src_image == NULL)
    {
	perror("fopen");    
	fprintf(stderr, "ERROR: Unable to open file %s.\n", decInfo -> src_image_fname);
	return e_failure;
    }

    // If no failure then return e_success.
    return e_success;
}
//Function definition to decode magic string.
Status decode_magic_string (DecodeInfo *decInfo )
{
    fseek ( decInfo -> fptr_src_image, 54, SEEK_SET);  //Leave first 54 header bytes and decode next 16 to get magic str.
    char str[2];
    decode_data_to_image (str, 2, decInfo -> fptr_src_image);  //function call to decode data.
    if (strcmp( str, MAGIC_STRING) == 0)     //comparision of decoded string with the MAGIC_STRING.
    {
	return e_success;   //if it returns e_success then means the strings matched.
    } 
    return e_failure;
}
//Function defintion to decode the extension size. 
Status decode_secret_file_extn_size (DecodeInfo *decInfo)
{
    char str[32];
    fread(str, sizeof(char), 32, decInfo -> fptr_src_image);  //read 32 bytes from source as the encoded value is integer.
    decode_size_to_lsb (&decInfo -> extn_size, str);   //function call to decode integers.
    return e_success;
}
//Function defintion to perform decoding operation.
Status decode_size_to_lsb (int *data, char *image_buffer)
{
    *data = 0;      //To make sure no garbage value is present.
    for (int i = 0; i < 32; i++)     
    {	
	*data = (*data | ((image_buffer[i] & 1) << i));    //operation to get lsb bit.
    }
}
//Function definition to decode the data from source image.
Status decode_data_to_image (char *data,int size, FILE *fptr_src_image)
{
    char str[8]; 
    for (int i = 0; i < size; i++)
    {
	fread(str, sizeof(char), 8, fptr_src_image);
	decode_byte_to_lsb (&data[i], str);   //function call to decode data.
    }
    return e_success;
}
//FUnction definition to perform bitwise operation and decode data.
Status decode_byte_to_lsb (char* data, char *image_buffer)
{
    *data = 0;
    for (int i = 0; i < 8; i++)
    {
	*data = (*data | ((image_buffer[i] & 1) << i));   //operation to get the lsb and at the end get the decoded byte.
    }     
    return e_success;
}
//Function definition to decode extension name. 
Status decode_secret_file_extn (DecodeInfo *decInfo, char* argv[])
{   
    //function call to decode name. 
    decode_data_to_image (decInfo -> extn_secret_file, decInfo -> extn_size, decInfo -> fptr_src_image);
    char* extn = decInfo -> extn_secret_file;   //the name in form of string is stored in  variable.
    extn[decInfo -> extn_size] = '\0';   //add \0 at the end of string name.
    char default_name[ 30 ] = "output";    //if no output file mentioned the create by the name as output.

    if (argv[3] != NULL)    //Read and validate of the output file name is done here.
    {
	if ( strchr (argv[3], '.') == NULL)    //add extension to the name if it is missed by user.
	{
	    decInfo -> secret_fname = strcat (argv[3], decInfo -> extn_secret_file);  
	}
	else
	{
	    decInfo -> secret_fname = argv[3];    //if user provided name + extension then assign it to struct variable.
	}
    }
    else          //If user has not provided any output file name then create file with default name.
    {
	decInfo -> secret_fname = strcat(default_name, decInfo->extn_secret_file);
	printf("INFO: No output file given.Creating %s as output file.\n", decInfo -> secret_fname);
    }
    // Secret_data Image file will be created where we get the decoded data.
    decInfo -> fptr_secret = fopen(decInfo -> secret_fname, "w");
    printf("INFO: Opened %s file.\n", decInfo -> secret_fname);
    // Do Error handling
    if (decInfo -> secret_fname == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", decInfo -> secret_fname);
	return e_failure;
    }
    return e_success;
}
//Function defintion to decode the size of the secret file i.e number of characters of the file.
Status decode_secret_file_size (DecodeInfo *decInfo)  
{
    char str[32];
    fread(str, sizeof(char), 32, decInfo -> fptr_src_image);  //32 bytes since its an integer value.
    decode_size_to_lsb (&decInfo -> secret_file_size, str);    //function call to decode integer value.
    return e_success;
}
//Function definition to decode the actual data.
Status decode_secret_file_data (DecodeInfo *decInfo)
{
    char str[decInfo -> secret_file_size * 8];   //size depends on the number of characters to decode.
    decode_data_to_image (str, decInfo -> secret_file_size, decInfo -> fptr_src_image);  //function call to decode data.
    fwrite (str, sizeof(char), decInfo -> secret_file_size, decInfo -> fptr_secret);   //write data in output file.
    return e_success;
}
//Decoding done successfully and the secret message stored in the output file.
