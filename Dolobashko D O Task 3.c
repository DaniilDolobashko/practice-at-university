#include <stdio.h>
#include <math.h>

int main()
{
   int p;
   printf("Enter the number of digits (≤ 30): ");
   scanf("%d", &p);

   // Я проаналізував, скільки чисел можна отримати з чисел 5 і 9
   // Ця кількість дорівнює 2 в степені р

   // З них я вирахував кількість чисел, які мають 3 однакові цифри поруч
   // Ця кількість дорівнює 2 в степені р-2

   // Але є виключення - числа що мають розрядність <2 не можуть мати 3 цифри

   // У завданні дана умова: р<=30
   // Оскільки чисел з розрядом <1 не існує, маємо наступний код для вирішення завдання:

   int result;

   if (p > 2 && p < 30)
   {
      result = pow(2, p) - pow(2, p - 2);
      printf("Number of numbers with %d digits: %d\n", p, result);
   }
   else if (p > 0 && p < 3)
   {
      result = pow(2, p);
      printf("Number of numbers with %d digits: %d\n", p, result);
   }
   else
   {
      printf("Please input correct number");
   }

   return 0;
}
