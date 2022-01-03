/* 
   This program encodes English-language phrases into 
(a simplified version of) Pig Latin.  
*/ 

#include <stdio.h>
#include <string.h>

char *generator(char *token)
{
   char phr1[100]="";
   char phr2[100]="";
   char *phr3 = phr2;
   
   strcpy(phr2, token); 
   strncpy(phr1, token, 1);
   strcat(phr1,"ay");
   phr3++;
   strcat(phr3, phr1);
   return phr3;
}

int main(void)
{
   char phrase[100];
   
   printf("Enter a phrase: ");
   gets(phrase);
   printf("The result: ");
      
   char *token = strtok(phrase, " ");
   
   while(token != NULL)
   {
      char *phr4 = generator(token);
      printf(" %s", phr4);      
      token = strtok(NULL, " "); 
   }
   return 0;
}