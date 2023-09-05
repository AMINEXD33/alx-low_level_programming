#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
void create_empty_file(const char *filename, mode_t FILE_PERMITIONS)
{
	open(filename, O_RDWR | O_CREAT, FILE_PERMITIONS);
}
/**
 * create_file- write content to a file , if it exists
 * , if not the function will create it and write to it
 * @filename: is the file name
 * @text_content: the content that the function will write to the file
 * Return: 0 if ok , -1 if an error raised
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int flag; /*0 if the file exists , 1 if the file has been created*/
	int trunc_code;
	int write_code;
	unsigned int len;
	mode_t FILE_PERMITIONS;

	FILE_PERMITIONS = S_IRUSR | S_IWUSR;
	if (text_content == NULL)
		create_empty_file(filename, FILE_PERMITIONS);
	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR, FILE_PERMITIONS);/*file already exists*/
	flag = 0;
	if (file == -1)
	{
		file = open(filename, O_CREAT | O_RDWR, FILE_PERMITIONS);/*file exist*/
		flag = 1;
		if (file == -1)
			return (-1);
	}
	if (flag == 0)/*exists*/
	{
		trunc_code = ftruncate(file, len);
		if (trunc_code != 0)
			return (-1);
		write_code = write(file, text_content, len);
		if (write_code == -1)
			return (-1);
	}
	else if (flag == 1)/* !exists*/
	{
		write_code = write(file, text_content, len);
		if (write_code == -1)
			return (-1);
	}
	return (1);
}
