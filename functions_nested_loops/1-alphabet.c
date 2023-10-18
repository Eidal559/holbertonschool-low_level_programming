#include "main.h"

/**
* print_albhabet - prints the lowercase alphabet followed by newline
*/

void print_alphabet(void)
  {
char letter = 'a';
while (letter <= 'z')
  {
    _putchar(letter);
    letter++;
  }
    _putchar('\n');
  }
