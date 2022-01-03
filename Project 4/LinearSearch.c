/* 
   This program prompts the user to input 10 values which is stored in an array, 
an integer to search for within the array, and indicates whether the value is in 
the array or not. 
*/ 

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int array[10];
    int i, num;
    bool flag = false;
    
    printf("Enter 10 values: ");
    for(i = 0; i < 10; i++)
       scanf("%d", (array + i));

    printf("Enter an integer to search for: ");
    scanf("%d", &num);
     
    for(i = 0; i < 10; i++)
    {
       if(*(array + i) == num)
       { 
           flag = true;
           printf("The value %d was found at index %d.", num, i); 
           break;
       }
    }
    
    if(flag == false)
    {
       printf("The value %d was not found in the array.", num);
    }

    return 0;
}
    


    