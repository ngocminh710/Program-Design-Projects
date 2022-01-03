/* 
   This program simulates the classical race between the tortoise and the hare. 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FINISH_LINE 70

void moveUpdate(int *moveT, int *moveH)
{
   int t = (rand() % 10) + 1;
   int h = (rand() % 10) + 1;

   if(t <= 5)
      *moveT += 3; 
   else if(t <= 7)
      *moveT -= 6; 
   else      
      *moveT += 1; 
   
   if(*moveT < 1)
      *moveT = 1;
   if(*moveT > FINISH_LINE)
      *moveT = FINISH_LINE;
      
   if(h <= 2)  
      *moveH += 0;  
   else if(h <= 4)  
      *moveH += 9;   
   else if(h <= 5)
      *moveH -= 12;
   else if(h <= 8)
      *moveH += 1;
   else
      *moveH -= 2;      
   
   if(*moveH < 1)
      *moveH = 1;
   if(*moveH > FINISH_LINE)
      *moveH = FINISH_LINE;
}

void printPos(int tortoise, int hare)
{   
   for(int i = 1; i <= FINISH_LINE; i++)
   {
      if(i == tortoise)
         printf("T");
      else if(i == hare)
         printf("H");
      else
         printf("-");
   } 
   
   if(tortoise == hare)
      puts(" OW!!");                
   else
      puts(""); 
}

int main(void)
{
   int tPosition = 1, hPosition = 1, timer = 0;
   
   srand(time(0));
      
   puts("ON YOUR MARK... GET SET...");
   puts("GO!!!!!");
   puts("AND THEY ARE OFF!!!!");
   
   while(tPosition < FINISH_LINE && hPosition < FINISH_LINE)
   {
      moveUpdate(&tPosition, &hPosition);
      printPos(tPosition, hPosition); 
      timer++;      
   }
   
   if(tPosition >= hPosition)
      puts("TORTOISE WIN!!! YAY!!!");         
   else
      puts("Hare wins. *golf clap*");      
   
   printf("TIME ELAPSED: %d seconds\n", timer);
   
   return 0;
}





   