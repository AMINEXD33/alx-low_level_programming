#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile- read from a file , and output to standredOUTPUT
 * @filename: is the file name
 * @letters: number of bytes the function is allowed to write to STDOUT
 * Return: the count of the all chars in the file
 */
ssize_t read_textfile(const char *filename, ssize_t letters)
{
	int fp;
	ssize_t write_count, read_count;
	char *BUFFER;

	if (filename == NULL || letters == 0)/*file doesn't exist*/
		return (0);
	/*open the file*/
	fp  = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	/*handle allocation*/
	BUFFER = malloc(sizeof(char) * letters);
	if (BUFFER == NULL)
	{
		free(BUFFER);
		return (0);
	}
	/*read bytes of size letters from the file*/
	read_count = read(fp, BUFFER, letters);
	if (read_count == -1)
	{
		free(BUFFER);
		return (0);
	}
	/*write the bytes of size letters to the STDOUT*/
	write_count = write(1, BUFFER, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(BUFFER);
		return (0);
	}
	free(BUFFER);
	close(fp);
	return (write_count);
}
