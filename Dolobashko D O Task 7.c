#include <stdio.h>
#include <math.h>

int main()
{
   double x1, y1, r1, x2, y2, r2;
   double distance;
   int intersection_points = 0;

   // Введення координат центрів та радіусів
   printf("Input x1, y1, r1, x2, y2, r2: ");
   scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

   // Формула, що підраховує відстань між центрами колів
   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   // Перевірка умов перетину колів
   if (distance == 0 && r1 == r2)
   {
      // Кола співпадають, а отже мають нескінченну кількість перетинів, виводимо -1, як вказано в умові
      intersection_points = -1;
   }

   else if (distance <= r1 + r2 && distance >= fabs(r1 - r2))
   {
      // Кола перетинаються або одне коло міститься в межах іншого
      if (distance < r1 + r2 || distance == fabs(r1 - r2))
         intersection_points = 2; // Дві точки перетину
      else
         intersection_points = 1; // Одна точка перетину
   }

   printf("Кількість точок перетину: %d\n", intersection_points);

   return 0;
}
