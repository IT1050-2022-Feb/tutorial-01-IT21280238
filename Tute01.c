/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float x, y ;
  float average ;
  
  printf("\n");
  
  printf("Enter the first number : ");
  scanf("%f" ,&x);
  printf("Enter the second number : ");
  scanf("%f" ,&y);

  average = ( x + y)/2 ;

  printf("Average is : %.2f \n ", average );
  
  return 0;
}

