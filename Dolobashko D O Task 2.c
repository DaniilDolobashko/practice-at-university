
#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника
int HCD(int a, int b)
{
   if (b == 0)
      return a;
   return HCD(b, a % b);
}

// Функція для знаходження найменшого спільного кратного
int HCK(int a, int b)
{
   return (a * b) / HCD(a, b);
}

// Код для вводу кількості чисел та самих чисел
int main()
{
   int p, i;
   printf("Input amount of numbers (from 2 to 20): ");
   scanf("%d", &p);

   // Задаю діапазон кількості чисел як вказано в умові завдання
   if (p < 2 || p > 20)
   {
      printf("Amount is less then 2 or more than 20\n");
      return 1;
   }

   int numbers[20];
   printf("Input numbers: ");
   for (i = 0; i < p; i++)
   {
      scanf("%d", &numbers[i]);

      // Роблю так, щоб при введенні не натурального числа видавало помилку
      if (numbers[i] <= 0)
      {
         printf("Incorrect number\n");
         return 1;
      }
   }

   // Запис чисел до змінної result
   int result = numbers[0];

   // Знаходимо найменше спільне кратне для решти чисел
   for (i = 1; i < p; i++)
   {
      result = HCK(result, numbers[i]);
   }
   // Виводимо результат
   printf("HCK: %d\n", result);

   return 0;
}