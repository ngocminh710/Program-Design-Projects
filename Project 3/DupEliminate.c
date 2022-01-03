/* 
   This program reads in 15 numbers between 1 and 100 inclusive, 
accesses the array to display only the distinct values based on 
the numbers that were entered. 
*/ 

#include <stdio.h>

int main(void)
{
   const int SIZE = 15;
   int a[SIZE];
   int k = 0;
   int number, duplicate;
   puts("Enter 15 numbers between 1 and 100 inclusive:");
   
   while(k < SIZE)
   {
       scanf("%d", &number);
       if (number < 1 || number > 100)
          break;
       duplicate = 0;
     
       for(int j = 0; j < k; j++)
       {
          if(a[j] == number)
          {
             duplicate = 1;
             break;
          }
       }
          
       if(!duplicate)
          a[k++] = number;   
   }
   
   printf("\nThe array: ");
   for(int i = 0; i < k; i++)
      printf("%d ", a[i]);

   return 0;
}