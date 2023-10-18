#include <unistd.h>
#include "main.h"

/**
* main - prints the lowercase alphabet
*
* Description: This function prints the lowercase alphabet.
*
* Return: Always 0 (Success)
*/

int main(void)
  {
char letter = 'a';
while (letter <= 'z')
  {
write(1, &letter, 1);
letter++;
  }
return (0);
  }
