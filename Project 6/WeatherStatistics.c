/* 
   This program accesses the data in the text files.  
*/ 

#include <stdio.h>
#include <string.h>

struct WeatherStats
{
   double mHighTemp;
   double mLowTemp;
   double mRainfall;
};

int main(void)
{
   struct WeatherStats data[12];
   FILE *pFile;
   char *months[12] = {"January", "February", "March", "April", "May", "June", "July", 
                      "August", "September", "October", "November" ,"December"};
   int i;   
   pFile = fopen("hightemps.txt", "r");
   if (pFile == NULL)
   {
      printf("Error opening file.\n");
      return 1;
   }
   for(i = 0; i < 12; i++)
      fscanf(pFile, "%lf", &data[i].mHighTemp);
   fclose(pFile);

   pFile = fopen("lowtemps.txt", "r");
   if (pFile == NULL)
   {
      printf("Error opening file.\n");
      return 1;
   }
   for(i = 0; i < 12; i++)
      fscanf(pFile, "%lf", &data[i].mLowTemp);
   fclose(pFile);

   pFile = fopen("rainfall.txt", "r");
   if (pFile == NULL)
   {
      printf("Error opening file.\n");
      return 1;
   }
   for(i = 0; i < 12; i++)
      fscanf(pFile, "%lf", &data[i].mRainfall);
   fclose(pFile);

   int highIndex = 0, lowIndex = 0;
   double highestTemp = data[highIndex].mHighTemp;
   double lowestTemp = data[lowIndex].mLowTemp;
   for(i = 0; i < 12; i++)
   {
      if(data[i].mHighTemp > highestTemp)
      {
         highestTemp = data[i].mHighTemp;
         highIndex = i;
      }
      if(data[i].mLowTemp < lowestTemp)
      {
         lowestTemp = data[i].mLowTemp;
         lowIndex = i;
      }
   }
   
   int hRainIndex = 0, lRainIndex = 0;
   double totalRain = 0.00, avgRain = 0.00;
   double highestRain = data[hRainIndex].mRainfall;
   double lowestRain = data[lRainIndex].mRainfall;
   for(i = 0; i < 12; i++)
   {
      if(data[i].mRainfall > highestRain)
      {
         highestRain = data[i].mRainfall;
         hRainIndex = i;
      }
      if(data[i].mRainfall < lowestRain)
      {
         lowestRain = data[i].mRainfall;
         lRainIndex = i;
      }
      totalRain += data[i].mRainfall;
   }
   avgRain = totalRain / 12;

   printf("\nThe yearly highest temperature is %.1lf which occurred in %s.", 
          highestTemp, months[highIndex]);
   printf("\nThe yearly lowest temperature is %.1lf which occurred in %s.", 
          lowestTemp, months[lowIndex]);
   printf("\nThe yearly highest rainfall is %.2lf which occurred in %s.", 
          highestRain, months[hRainIndex]);
   printf("\nThe yearly lowest rainfall is %.2lf which occurred in %s.", 
          lowestRain, months[lRainIndex]);
   printf("\nThe total rainfall for the year is %.2lf.", totalRain);
   printf("\nThe average monthly rainfall is %.2lf.", avgRain);

   return 0;
}