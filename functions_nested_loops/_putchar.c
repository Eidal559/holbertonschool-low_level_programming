#include <unistd.h>

/**
 * _putcher - writes the character c to stdout
 * @c: The chracter to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set approved
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
