#ifndef _IO_H
#define _IO_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 *struct BUFFER- SIMPLE buffer handling structure
 *@size: the size of the string
 *@string: a string
 */
typedef struct BUFFER
{
	int size;
	char *string;
} buffer;
#endif /**_IO_H**/
