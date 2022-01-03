/* 
   This program uses brute-force computing to determine the integer sets of 
Pythagorean triples up to a limit set by the user. 
*/ 

#include <stdio.h>

int main(void)
{
   int a;
   printf("Enter a maximum integer length for a: ");
   scanf("%d", &a);
   
   int numTriples = 0; 
   for(int i = 1; i <= a; i++)
   {
      for(int j = 1; j <= a; j++)
      {
         for(int k = 1; k <= a; k++)
         {
            if (i*i + j*j == k*k)
            {
               printf("Pythagorean triple set: (%d, %d, %d)\n", i, j, k);
               numTriples++;
            }
         }
      }
   }   
         
   printf("The total number of triples: %d", numTriples);
   
   return 0;
}