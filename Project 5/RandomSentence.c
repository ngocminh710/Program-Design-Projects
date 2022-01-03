/* 
   This program uses random number generation to create sentences. 
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};
    char sentence[100] = "";

    int number;
    printf("How many sentences would you like to generate? ");
    scanf("%d", &number);

    for(int i = 0; i < number; i++)
    {   
        strcat(sentence, article[rand() % 5]);
        strcat(sentence, " ");
        strcat(sentence, noun[rand()%5]);
        strcat(sentence, " ");
        strcat(sentence, verb[rand()%5]);
        strcat(sentence, " ");
        strcat(sentence, preposition[rand()%5]);
        strcat(sentence, " ");
        strcat(sentence, article[rand()%5]);
        strcat(sentence, " ");
        strcat(sentence, noun[rand()%5]);

        putchar(toupper(sentence[0]));
        printf("%s.\n", &sentence[1]);
        sentence[0] = '\0';    
    }
    return 0;
}