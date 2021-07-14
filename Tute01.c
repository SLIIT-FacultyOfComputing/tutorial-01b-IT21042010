/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1, sub2;
  float avg;
  
  printf("Enter mark subject 1 :");// get input from user
  scanf("%d", &sub1);
  printf("Enter mark subject 2 :");
  scanf("%d", &sub2);

  avg = (sub1 + sub2)/ 2; // calculation

  printf("%.2f", avg); // display output 
  
  return 0;
}

