#include "main.h"

/**
* read_textfile - Reads a text file and prints to the POSIX standard
* @filename: Name of the file to read
* @letters: Numbers of letters to read and print
*
* Return: The actual number of letters it could read and print
*     0 if the file cannot be opened or read,
*     0 if the filename is NULL, or
*     0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytesRead, bytesWritten;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(fd);
return (0);
}

bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
close(fd);

if (bytesWritten == -1 || (size_t)bytesWritten < (size_t)bytesRead)
return (0);

return (bytesRead);
}
