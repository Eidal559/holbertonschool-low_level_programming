#include "main.h"

/**
* _isalpha - check if a character is an alphabetic character
* @c: The character to check
*
* Description: This function checks if the character 'c' is an alphabetic.
*
* Return: 1 if 'c' is an alphabetic character, 0 otherwise.
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
