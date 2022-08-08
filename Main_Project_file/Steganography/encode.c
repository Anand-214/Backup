#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"

//Function to perform encoding.
Status do_encoding (EncodeInfo *encInfo)     
{
    //All the function calls are inside condition and when the condition is true we print confirmation message. 
    //Function call to open the files mentioned.
    if ( open_files (encInfo) == e_success)  
    {
	printf("INFO: Opening Files Done successfully.\n");
    }
    else     //else part is for error handling.
    {	
	printf("ERROR: Open files was failed.\n");
	return e_failure;
    }
    //Function call to check the capacity of the file to encode data.
    if ( check_capacity (encInfo) == e_success)   
    {
	printf("INFO: Check capacity was successful.\n");
    }
    else
    {
	printf("ERROR: Check capacity Failed.\n");
	return e_failure;
    }
    //Function call to copy the header bytes.
    if ( copy_bmp_header (encInfo -> fptr_src_image, encInfo -> fptr_stego_image) == e_success) 
    {
	printf("INFO: Copying bmp header was successful.\n");
    }
    else
    {
	printf("ERROR: Copying bmp header was failed.\n");
	return e_failure;
    }
    //Function call to encode magic string.
    if ( encode_magic_string (MAGIC_STRING, encInfo) == e_success)
    {
	printf("INFO: Magic String encoding Successful.\n");
    }
    else
    {
	printf("ERROR: Magic string encoding failed.\n");
	return e_failure;
    }
    //Below we extracted the extension from the file name and copied it to structure variable. 
    strcpy ( encInfo -> extn_secret_file, (strchr ( encInfo -> secret_fname, '.')));  
    //Function call to encode secret file extension size.
    if ( encode_secret_file_extn_size (strlen (encInfo -> extn_secret_file), encInfo) == e_success)
    {
	printf("INFO: Secret file extension size encoded.\n");
    }
    else
    {
	printf("ERROR: Secret file extension size encoding failed.\n");
	return e_failure;
    }
    //Function call to encode the extension of the secret file.
    if ( encode_secret_file_extn (encInfo -> extn_secret_file, encInfo) == e_success)
    {
	printf("INFO: Secret file extension encoded.\n");
    }
    else
    {
	printf("ERROR: Secret file extension encoding failed.\n");
	return e_failure;
    }
    //Function call to encode the total number of characters in present in secret file.
    if ( encode_secret_file_size (encInfo -> size_secret_file, encInfo) == e_success)
    {
	printf("INFO: Secret file size encoded.\n");
    }
    else
    {
	printf("ERROR: Secret file size encoding failed.\n");
	return e_failure;
    }
    //Function call to encode the data present. 
    if ( encode_secret_file_data (encInfo) == e_success)
    {
	printf("INFO: Secret file data encoded successfully.\n");
    }
    else
    {
	printf("ERROR: Secret file size data encoding failed.\n");
	return e_failure;
    }
    //Function call to copy all the remaining data.
    if ( copy_remaining_img_data (encInfo -> fptr_src_image, encInfo -> fptr_stego_image) == e_success )
    {
	printf("INFO: Remaining Data copied successfully.\n");
    }
    else
    {
	printf("ERROR: Remaining Data copying failed.\n");
	return e_failure;
    }
    printf("INFO: ##Encoding Done successfully.##\n");
}
/* Function Definitions */

//Function to get the image size.
uint get_image_size_for_bmp (FILE *fptr_image)
{
    uint width, height;
    // Seek to 18th byte
    fseek(fptr_image, 18, SEEK_SET);

    // Read the width (an int)
    fread(&width, sizeof(int), 1, fptr_image);

    // Read the height (an int)
    fread(&height, sizeof(int), 1, fptr_image);

    // Return image capacity
    return width * height * 3;
}
//Function call to get the total number of characters present in secret file.
uint get_file_size (FILE *fptr)    
{
    fseek (fptr, 0, SEEK_END); 
    return ftell(fptr);
}

//Function definition to open files mentioned in comman line.
Status open_files (EncodeInfo *encInfo)
{
    // Src Image file
    encInfo -> fptr_src_image = fopen(encInfo -> src_image_fname, "r");
    // Do Error handling
    if (encInfo -> fptr_src_image == NULL)
    {
	perror("fopen");    //Error handling.
	fprintf(stderr, "ERROR: Unable to open %s file.\n", encInfo -> src_image_fname);
	return e_failure;
    }
    else    
	printf("INFO: Opened Skeleton/%s file.\n", encInfo -> src_image_fname);

    // Secret file
    encInfo -> fptr_secret = fopen(encInfo -> secret_fname, "r");
    // Do Error handling
    if (encInfo -> fptr_secret == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s.\n", encInfo -> secret_fname);
	return e_failure;
    }
    else
	printf("INFO: Opened %s file.\n", encInfo -> secret_fname);

    // Stego Image file
    encInfo -> fptr_stego_image = fopen(encInfo -> stego_image_fname, "w");
    // Do Error handling
    if (encInfo -> fptr_stego_image == NULL)
    {
	perror("fopen");
	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->stego_image_fname);
	return e_failure;
    }
    else
	printf("INFO: Opened %s as a output file.\n", encInfo -> stego_image_fname);

    // If no failure return e_success
    return e_success;
}
//FUnction definition to check the capacity of the source file to encode the secret message.
Status check_capacity (EncodeInfo *encInfo)
{
    encInfo -> image_capacity = get_image_size_for_bmp (encInfo -> fptr_src_image);
    encInfo -> size_secret_file = get_file_size (encInfo -> fptr_secret);
    //COndition to check if the source image is capable to store the secret message in it or not.  
    if ( encInfo -> image_capacity > ( 54 + 2 * sizeof("#*") + 32 + 32 + 32 + 8 * encInfo -> size_secret_file)) 
	return e_success; 
    else
	return e_failure;
}
//Function to copy the header files into the output file as it is without encoding.
Status copy_bmp_header (FILE* fptr_src_image, FILE* fptr_dest_image)
{
    char str[54];
    fseek (fptr_src_image, 0, SEEK_SET);              //set the offset on the 0th position.
    fread (str, sizeof(char), 54, fptr_src_image);    //read 54 bytes from source file.
    fwrite (str, sizeof(char), 54, fptr_dest_image);  //write 54 bytes to the output file.
    return e_success;
}
//Function definition to encode the magic string.
Status encode_magic_string (const char* magic_string, EncodeInfo *encInfo)
{
    encode_data_to_image (MAGIC_STRING, strlen (MAGIC_STRING), encInfo -> fptr_src_image, encInfo -> fptr_stego_image);
    return e_success;
}
Status encode_byte_to_lsb (char data, char *image_data)
{
    for (int i = 0; i < 8; i++)
    {
	image_data[i] = (image_data[i] & 0xfe) | ((data >> i) & 1);   //operation.
    }
    return e_success;
}
//Function defintion to encode the extension size. (e.g. if extension is .txt then encode 4)
Status encode_secret_file_extn_size (int extn_secret_file, EncodeInfo *encInfo)
{
    char str[32];
    fread(str, sizeof(char), 32, encInfo -> fptr_src_image);  //read from source.
    encode_size_to_lsb (extn_secret_file, str);     //function call to perform encoding.
    fwrite(str, sizeof(char), 32, encInfo -> fptr_stego_image);  //write to the output file.
    return e_success;
}
Status encode_size_to_lsb (int data, char *str)
{
    for (int i = 0; i < 32; i++)     
    {	
	str[i] = (str[i] & 0xfe) | ((data >> i) & 1);    //encoding operation.
    }
}
//Function call to encode the extension name.
Status encode_secret_file_extn (char* file_extn , EncodeInfo *encInfo)
{
    encode_data_to_image (file_extn, strlen (file_extn), encInfo -> fptr_src_image, encInfo -> fptr_stego_image);
    return e_success;
}
//This function definition encodes the data into the imgae.
//Function definition to encode each bit from data of secret file into each source file byte's LSB.
//Function definition to encode secret file size.
Status encode_secret_file_size (int file_size, EncodeInfo *encInfo)
{
    char str[32];
    fread(str, sizeof(char), 32, encInfo -> fptr_src_image);
    encode_size_to_lsb (file_size, str);     //function call to encode integer values.
    fwrite(str, sizeof(char), 32, encInfo -> fptr_stego_image);
    return e_success;
}
//Function definition to encode the data from the secret file.
Status encode_secret_file_data (EncodeInfo *encInfo)
{
    char str[encInfo -> size_secret_file];
    rewind(encInfo -> fptr_secret);
    fread(str, sizeof(char),encInfo -> size_secret_file, encInfo -> fptr_secret);
    encode_data_to_image (str, encInfo -> size_secret_file, encInfo -> fptr_src_image, encInfo -> fptr_stego_image);
    return e_success;
}
Status encode_data_to_image (char *data, int size, FILE *fptr_src_image, FILE *fptr_stego_image)
{
    char str[8] = {};
    for (int i = 0; i < size; i++)
    {
	fread(str, sizeof(char), 8, fptr_src_image);     
	encode_byte_to_lsb (*(data + i), str);        //function call to perform bitwise operation on each byte.
	fwrite(str, sizeof(char), 8, fptr_stego_image);
    }
    return e_success;
} 
//Function defintion to encode the integer values bit by bit into the LSB of the source.
//Function to copy all the remaining data as it is in output file.
Status copy_remaining_img_data (FILE* fptr_src_image, FILE* fptr_dest_image)
{
    char data = 0;
    while( fread (&data, sizeof(char), sizeof(char), fptr_src_image) > 0 )   //condition true till offset not reach EOF.
    {
	fwrite (&data, sizeof(char), sizeof(char), fptr_dest_image);   //write into the output file.
    }
    return e_success;
}

