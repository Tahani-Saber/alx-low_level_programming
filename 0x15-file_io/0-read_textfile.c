#include "main.h"

/**
 * read_textfile -  reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: number of letters to read
 *
 * Return: number of letters and 0 on failuer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	char ch;

	ptr = fopen(filename, "r");
	if (filename == NULL)
		return (0);
	while (letters)
	{
		ch = fgetc(ptr);
		_putchar(ch);
		letters++;
	}
	fclose(ptr);
	return (0);
}
