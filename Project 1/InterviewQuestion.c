/* 
   This program lets the user enter two integer values and then swaps 
the two values in their variables without using a third (temporary) variable. 
*/ 

#include <stdio.h>

int main(void)
{
   int x, y;
   
   printf("Enter the first integer: ");
   scanf("%d", &x);
   printf("Enter the second integer: ");
   scanf("%d", &y);
       
   x = x + y; //x = initial_x + initial_y  
   y = x - y; //y = (initial_x + initial_y) - initial_y = initial_x
   x = x - y; //x = (initial_x + initial_y) - initial_x = initial_y

   printf("\nAfter swapping, the first integer is %d.\n", x);
   printf("After swapping, the second integer is %d.\n", y);
     
   return 0;
}

   