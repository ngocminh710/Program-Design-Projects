/* 
   This program prompts the user for the current day of the week, the number of days 
after the current day of the week, and displays the future day of the week. 
*/ 

#include <stdio.h>

int main(void)
{
   int currentDay;
   printf("Enter a value between 0 and 6 inclusive: ");
   scanf("%d", &currentDay);
   
   while((currentDay < 0) || (currentDay > 6))
   {
      printf("Invalid. Re-enter the value: ");
      scanf("%d", &currentDay);
   }
   
   int numDays;
   printf("Enter the number of days after the current day: ");
   scanf("%d", &numDays);
   
   switch(currentDay)
   {
      case 0: printf("\nToday is Sunday. ");
              break;
      case 1: printf("\nToday is Monday. ");
              break;
      case 2: printf("\nToday is Tuesday. ");
              break;
      case 3: printf("\nToday is Wednesday. ");
              break;
      case 4: printf("\nToday is Thursday. ");
              break;
      case 5: printf("\nToday is Friday. ");
              break;
      case 6: printf("\nToday is Saturday. ");
              break;
   }
   
   int futureDay = (currentDay + numDays) % 7;
   switch(futureDay)
   {
      case 0: printf("In %d days, it will be Sunday.", numDays);
              break;
      case 1: printf("In %d days, it will be Monday.", numDays);
              break;
      case 2: printf("In %d days, it will be Tuesday.", numDays);
              break;
      case 3: printf("In %d days, it will be Wednesday.", numDays);
              break;
      case 4: printf("In %d days, it will be Thursday.", numDays);
              break;
      case 5: printf("In %d days, it will be Friday.", numDays);
              break;
      case 6: printf("In %d days, it will be Saturday.", numDays);
              break;
   } 
  
   return 0;
}