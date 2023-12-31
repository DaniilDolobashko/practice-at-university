#include <stdio.h>
#include <math.h>

// Функція, яка реалізує формулу для обрахунку довжини вектора
double calculateVectorLength(int x1, int y1, int x2, int y2)
{
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main()
{

    // Введення координат користувачем
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the starting point of the vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the end point of the vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Виклик функції та виведення результату
    double vectorLength = calculateVectorLength(x1, y1, x2, y2);
    printf("Vector's length: %.6f\n", vectorLength);

    return 0;
}
