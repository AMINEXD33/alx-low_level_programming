#ifndef _IO_H
#define _IO_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
#endif /**_IO_H**/