#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"
int read_to_BUFFER(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_);
int write_to_file(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_);
void cant_read_err(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_);
void cant_write_err(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_);
/**
 *main-ENTRY POINT
 *@argc: the number of passed arguments
 *@argv: a list of the arguments
 *Return: 1 if ok , -1 if an error raises
 */
int main(int argc, char **argv)
{
	struct BUFFER *BUFFER_;
	/*exits if args are not availble*/
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	BUFFER_ = malloc(sizeof(buffer));
	read_to_BUFFER(argv[1], BUFFER_);
	write_to_file(argv[2], BUFFER_);
	free(BUFFER_->string);
	free(BUFFER_);
	return (0);
}
/**
 *write_to_file- write the BUFFER to a file
 *@NAME_OF_THE_FILE: name of the file
 *@BUFFER_: the BUFFER struct
 *Return: 1 always
 */
int write_to_file(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_)
{
	int file;
	int flag;
	int truncate_code, write_code, close_code;
	mode_t file_mode;

	flag = 0;
	file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file = open(NAME_OF_THE_FILE, O_WRONLY, file_mode);
	if (file == -1)
	{
		file = open(NAME_OF_THE_FILE, O_CREAT | O_WRONLY, file_mode);
		flag = 1;
		if (file == -1)
			cant_write_err(NAME_OF_THE_FILE, BUFFER_);
	}
	if (flag == 0)
	{
		truncate_code = ftruncate(file, BUFFER_->size);
		if (truncate_code != 0)
			cant_write_err(NAME_OF_THE_FILE, BUFFER_);
		write_code = write(file, BUFFER_->string, BUFFER_->size);
		if (write_code == -1)
			cant_write_err(NAME_OF_THE_FILE, BUFFER_);
	}
	else
	{
		write_code = write(file, BUFFER_->string, BUFFER_->size);
		if (write_code == -1)
			cant_write_err(NAME_OF_THE_FILE, BUFFER_);
	}
	close_code = close(file);
	if (close_code == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close_code);
		free(BUFFER_->string);
		free(BUFFER_);
	}
	return (-1);
}
/**
 *read_to_BUFFER-a function that reads by chunks from
 *a file and push to a BUFFER struct
 *@NAME_OF_THE_FILE : file name
 *@BUFFER_: the BUFFER struct (see main.h)
 *Return: 1 always
 */
int read_to_BUFFER(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_)
{
	int file, close_code;
	unsigned int CHUNK_SIZE, CHUNK_COUNT, offset;
	long int bytes_read;

	CHUNK_SIZE  = 1024; /*track the size*/
	CHUNK_COUNT = 1024;/*track the times we added 1024*/
	offset = 0;/*offset to keep track of where to write on the buffer*/
	BUFFER_->string = malloc(sizeof(char) * CHUNK_SIZE);
	BUFFER_->size = 0;
	if (BUFFER_->string == NULL)
		cant_read_err(NAME_OF_THE_FILE, BUFFER_);
	file = open(NAME_OF_THE_FILE, O_RDONLY);
	if (file == -1)
		cant_read_err(NAME_OF_THE_FILE, BUFFER_);
	/*read from the file and write to the buffer with respect to the offset*/
	while ((bytes_read = read(file, BUFFER_->string + offset, CHUNK_SIZE)) > 0)
	{
		/*keeping track of how mush free bytes are availble*/
		CHUNK_SIZE = CHUNK_SIZE - bytes_read;
		/*the size of the BUFFER increase by the amount writen to the BUFF*/
		BUFFER_->size += bytes_read;
		if (CHUNK_SIZE == 0)/*NO free space availble*/
		{
			CHUNK_COUNT += 1024;/*update chunk count*/
			offset += 1024;/*offset update*/
			/*realloc*/
			BUFFER_->string  = realloc(BUFFER_->string, sizeof(char) * CHUNK_COUNT);
			if (BUFFER_->string  == NULL)
				cant_read_err(NAME_OF_THE_FILE, BUFFER_);
			CHUNK_SIZE += 1024;
		}
	}
	if (bytes_read == -1)
		cant_read_err(NAME_OF_THE_FILE, BUFFER_);
	close_code = close(file);
	if (close_code == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close_code);
		free(BUFFER_->string);
		free(BUFFER_);
	}
	return (1);
}
/**
 *cant_read_err- is a function that writes to the STDERR an error msg for
 *not being able to read the file, and frees allocated memorie
 *@NAME_OF_THE_FILE: file name
 *@BUFFER_: BUFFER struct
 */
void cant_read_err(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_)
{
	dprintf(2, "Error: Can't read from file %s\n", NAME_OF_THE_FILE);
	free(BUFFER_->string);
	free(BUFFER_);
	exit(98);
}
/**
 *cant_write_err- is a function that writes to the STDERR an error msg for
 *not being able to read the file, and frees allocated memorie
 *@NAME_OF_THE_FILE: file name
 *@BUFFER_: BUFFER struct
 */
void cant_write_err(char *NAME_OF_THE_FILE, struct BUFFER *BUFFER_)
{
	dprintf(2, "Error: Can't write to %s\n", NAME_OF_THE_FILE);
	free(BUFFER_->string);
	free(BUFFER_);
	exit(99);
}
