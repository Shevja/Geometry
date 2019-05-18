#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

void area(float r1, float pi)
{
    float s = pi * r1;
    // float *p;
    // p = &s;
    printf("%f\n\n", s);
}

int main()
{
    float x1, x2, y1, y2, r1, r2, pi = 3.14;

    printf("Введите координаты (x и y) центра первой окружности: \n");
    scanf("%f %f", &x1, &y1);
    printf("Введите радиус первой окружности: \n");
    scanf("%f", &r1);

    printf("\nPoint_1 = %f\tPoint_2 = %f\n\tRadius_1 = %f\n\n", x1, y1, r1);

    printf("Введите координаты (x и y) центра второй окружности: \n");
    scanf("%f%f", &x2, &y2);
    printf("Введите радиус второй окружности: \n");
    scanf("%f", &r2);

    printf("\nPoint_1 = %f\tPoint_2 = %f\n\tRadius_2 = %f\n\n", x2, y2, r2);

    if ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) > (r1 + r2) * (r1 + r2))
        printf("Фигуры не пересекаются\n");
    else
        printf("Фигуры пересекаются\n");

    area(r1, pi);

    return 0;
}