#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   char word[15];
   int length;
   int factorial = 1;

   // Введення слова
   printf("Enter a word of up to 14 letters: ");
   scanf("%s", word);

   // Підрахунок кількості букв у слові для подальших формул
   length = strlen(word);

   // Накладання умови завдання - не більше 14 букв у слові
   if (length > 14)
   {
      printf("The number of letters in the word exceeds 14.\n");
   }
   // Я вирахував, що кількість анаграм підраховуєтсья за формулою:
   // !(довжина слова) / 2, для тих слів, які мають більше 3 букв
   // А слова, що містять 3 і менше букв: !(довжина слова)
   // Формули, зазначені вище, реалізуютсья наступним кодом:
   else if (3 < length && length <= 14)
   {
      for (int i = 1; i <= length; i++)
      {
         factorial *= i;
      }
      factorial = factorial / 2;
      printf("Number of anagrams: %d\n", factorial);
   }
   else
   {
      for (int i = 1; i <= length; i++)
      {
         factorial *= i;
      }
      printf("Number of anagrams: %d\n", factorial);
   }

   return 0;
}