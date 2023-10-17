#include "main.h"
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program calls the print_alphabet_x10
 *
 * Return: Always 0.
 */

int main(void)
{
  char letter = 'a';
  int i;
  for (i = 0; i < 10; i++)
    {
      while (letter <= 'z')
	{
	  write(1, &letter, 1);
	  letter++;
	}
      letter = 'a'; // Reset the letter to 'a' for the next iteration
    }
  return (0);
}
