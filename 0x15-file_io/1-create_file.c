#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
/**
 * 
 * 
 * 
 * 
 * 
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int flag; /*0 if the file exists , 1 if the file has been created*/
	int trunc_code;
	int write_code;
	unsigned int len;
	mode_t FILE_PERMITIONS;

	len = strlen(text_content);
	/*read and write permission for the owner*/
	FILE_PERMITIONS = S_IRUSR | S_IWUSR;
	if (filename == NULL)
	{
		return(-1);
	}
	file = open(filename,O_RDWR,FILE_PERMITIONS);/*file already exists*/
	flag = 0;
	if (file == -1)
	{
		file = open(filename,O_CREAT | O_RDWR,FILE_PERMITIONS);/*if it doesnt exist*/
		flag = 1;
		if (file == -1)
		{
			return (-1);
		}
	}
	if (flag == 0)
	{
		trunc_code = ftruncate(file, len);
		if (trunc_code != 0)
		{
			return (-1);
		}
		write_code = write(file, text_content, len);
		if (write_code == -1)
		{
			return (-1);
		}
	}
	else
	{
		write_code = write(file, text_content, len);
		if (write_code == -1)
		{
			return (-1);
		}
	}
	return (0);
}
