#include "holberton.h"

/**
* read_textfile - Write a function that reads a text file
*and prints it to the POSIX standard output.
*@filename: filename
*@letters: letters to read
*Return: size of written characters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, read_file, write_file;
char *buffer = malloc(sizeof(char) * letters);

if (filename == NULL)
{
return (0);
}


fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

read_file = read(fd, buffer, letters);

if (read_file == -1)
{
return (0);
}

write_file = write(STDOUT_FILENO, buffer, read_file);

if (write_file == -1)
{
return (0);
}

close(fd);

return (write_file);

}
