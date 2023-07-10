#include <stdio.h>

// Створюємо функцію
int minimumSteps(int x, int y)
{
   // Якщо числа рівні, значить мінімальна кількість кроків відповідно дорівнює 0
   if (x == y)
   {
      return 0;
   }

   // Змінна count дорівнює 1, якщо різниця теж дорівнює 1, то виводимо в результаті 1
   // Якщо більше одного, то виконується код нижче
   int count = 1;
   int difference = y - x;

   while (difference > count)
   {
      if (difference <= 2 * count)
      {
         difference = 0;
      }
      count++;
   }

   return count;
}

int main()
{

   // Введення та зчитування чисел
   int x, y;
   printf("x: ");
   scanf("%d", &x);
   printf("y: ");
   scanf("%d", &y);

   // Виведення результату
   printf("\nResult: %d", minimumSteps(x, y));

   return 0;
}