#include "main.h"
#include <stdarg.h>

/**
* main - Copies the content of one file to another.
* @argc: The argument count
* @argv: The argument vector
*
* Return: 0 on success, otherwise exists with an error code.
*/
int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from;
int fd_to;

if (argc != 3)
{
error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
}

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Error: Can't read from file %s\n", file_from);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
error_exit(99, "Error: Can't write to file %s\n", file_to);
}

if (close(fd_from) == -1)
{
error_exit(100, "Error: Can't close fd %d\n", fd_from);
}

if (close(fd_to) == -1)
{
error_exit(100, "Error: Can't close fd %d\n", fd_to);
}

return (0);
}
