/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minumum(int x , int y );
int maximum(int x , int y );
int multiply(int x , int y );

int main() {
   int no1, no2 , i ;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("minimum : %d \n", minimum(no1, no2));
   printf("maximum : %d \n", maximum(no1, no2));
   printf("product : %d \n", multiply(no1, no2));
   return 0;
}

int minimum(int x , int y)
{
int min = 0;

  if ( x>y )
  {
    min=y;
  }
  else
    min=x;

  return min ;  
} 

int maximum(int x , int y)
{
int max = 0;

  if ( x>y )
  {
    max = x;
  }
  else
    max = y ;

  return max ;  
} 

int multiply(int x , int y )
{
  x*y ;
  return x*y ;
}