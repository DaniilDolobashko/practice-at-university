#include <stdio.h>

int main()
{
   int n;
   int count = 0;

   printf("Enter a natural number n (1 < n < 150): ");
   scanf("%d", &n);

   if (n > 1 && n < 150)
   {
      // Перебираємо всі можливі дільники від 1 до n-1
      for (int i = 1; i < n; i++)
      {

         // Перевіряємо, чи є i рівним дільником числа n, якщо так, то збільшуємо лічильник
         if (n % i == n / i)
         {
            count++;
         }
      }
      // Виводим результат програми
      printf("The number of equal divisors of a number %d: %d\n", n, count);
   }
   else
      printf("The number is beyond the condition");

   return 0;
}
