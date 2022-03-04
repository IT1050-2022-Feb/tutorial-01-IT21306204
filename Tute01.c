/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int a;
  int b;
  float avg;
  printf("Enter the number 1 : ");
  scanf("%d",&a);
  printf("Enter the number 2 : ");
  scanf("%d",&b);
  avg=a+b/2;
  printf("Average of the two numbers = %.2f",avg);
  return 0;
}

