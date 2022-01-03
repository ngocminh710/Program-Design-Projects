/* 
   This program implements the Sieve of Eratosthenes method. 
*/ 

#include <stdio.h>

void flip(int a[], int N)
{
   int index = 2;
   while (index < N)
   {
      if (a[index] != 1)
         index++;
      else 
      {
         for(int i = index * 2; i < N; i += index)
             a[i] = 0;
         index++;
      }
   }
}

int main(void)
{
   int SIZE;
   printf("Enter the size of the array: ");
   scanf("%d", &SIZE);
   
   int arr[SIZE];
   for(int i = 0; i < SIZE; i++)
       arr[i] = 1;
   
   flip(arr, SIZE);
   
   int numPrimes = 0;
   for(int n = 2; n < SIZE; n++)
   {
      if(arr[n] == 1)
      {
         numPrimes++;
         printf("%7d ", n);
         if(numPrimes % 10 == 0)
            puts("");
      }
   }

   printf("\nThe total number of primes: %d\n", numPrimes);
   return 0;
}
