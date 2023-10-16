#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int n;
 /* Initialize the random number generator with the current time */ srand(time(NULL));
 /* Generate a ramdom number between INT_MIN and INT_MAX */
  n = rand();
 /* Print the random number */
 printf("The number %d is ", n);
 /* Check if the number is positive, negative, or zero */
 if (n > 0) 
 printf("positive\n");
 else if (n < 0)
 printf("negative\n");
 else{
 printf("zero\n");
 return (0);
}
