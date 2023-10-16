#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
 int n;
  srand(time(0));
 
  n = rand();
 
 printf("The number %d is ", n);
 
 if (n > 0){ 
   printf("is positive\n,", n);
 }
 else if (n < 0){
   printf("is negative\n", n);
 }
 else{
   printf("is zero\n", n);
 }
 return (0);
}
