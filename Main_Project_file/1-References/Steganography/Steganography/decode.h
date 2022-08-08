#ifndef DECODE_H
#define DECODE_H

#include "types.h" // Contains user defined types

/* 
 * Structure to store information required for
 * decoding secret file to output file.
 * Info about output and intermediate data is
 * also stored.
 */

#define MAX_FILE_SUFFIX 4

typedef struct _DecodeInfo
{
    /* Source Image info */
    char *src_image_fname;
    FILE *fptr_src_image;
    uint extn_size;

    /* Output file info */
    char *secret_fname;
    FILE *fptr_secret;
    char extn_secret_file[MAX_FILE_SUFFIX];
    uint secret_file_size;
} DecodeInfo;


/* Decoding function prototype */

/* Check operation type */
OperationType check_operation_type(char *argv[]);

/* Read and validate Encode args from argv */
Status read_and_validate_decode_args(char *argv[], DecodeInfo *decInfo);

/* Perform the decoding */
Status do_decoding( DecodeInfo *decInfo, char* argv[]);

/* Get File pointers for i/p and o/p files */
Status open_files_decode(DecodeInfo *decInfo);

/* Store Magic String */
Status decode_magic_string(DecodeInfo *decInfo);

/* Decode function, which does the real encoding */
Status decode_data_to_image(char *data, int size, FILE *fptr_src_image);

/* Decode a byte into LSB of image data array */
Status decode_byte_to_lsb(char* data, char *image_buffer);

/* Decode secret file size */
Status decode_secret_file_extn_size(DecodeInfo *decInfo);

/* Decode a byte into LSB of image data array */
Status decode_size_to_lsb(int *size, char* str);

/* Decode secret file extenstion */
Status decode_secret_file_extn(DecodeInfo *decInfo, char** argv);

/* Decode secret file size */
Status decode_secret_file_size(DecodeInfo *encInfo);

/* Decode secret file data*/
Status decode_secret_file_data(DecodeInfo *decInfo);

#endif 
