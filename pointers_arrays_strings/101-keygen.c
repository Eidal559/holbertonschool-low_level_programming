#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* generatePassword - Generates a random password.
* @password: The character array to store the generated password.
* @length: The desired length of thepassword.
*/

void generatePassword(char *password, int length)
{
int i;
const char charset[] = "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charsetLength = sizeof(charset) - 1;

for (i = 0; i < length; i++)
{
password[i] = charset[rand() % charsetLength];
}
password[length] = '\0';
}
