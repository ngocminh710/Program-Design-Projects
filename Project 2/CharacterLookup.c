/* 
   This program prompts the user for an integer between 32 and 126 inclusive 
and displays the corresponding character for the entered value. 
*/ 

#include<stdio.h>

int main(void)
{
   int number;
   printf("Enter an integer between 32 and 126 inclusive: ");
   scanf("%d", &number);
   
   while((number < 32) || (number > 126))
   {
      printf("Invalid. Re-enter the number: ");
      scanf("%d", &number);
   }
 
   printf("The integer number you entered is %d.\n", number);
   printf("The corresponding character for %d is %c in the ASCII standard.\n", number, number);

   return 0;
}