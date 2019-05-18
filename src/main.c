#include "func.h"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

/*void area(float r1, float pi)
{
    float s = pi * r1;

    printf("%f\n\n", s);
}*/

int main()
{
    float pir1, pir2, s1, s2, x1, x2, y1, y2, r1, r2, pi = 3.14;

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

    if (cintfig(x1, x2, y1, y2, r1, r2) == 1)
        printf("Фигуры не пересекаются\n");
    else
        printf("Фигуры пересекаются\n");

    s1 = area(r1, pi);
    s2 = area(r2, pi);
    pir1 = perim(r1, pi);
    pir2 = perim(r2, pi);

    printf("Площадь первой окружности: %f\tПлощадь второй окружности: %f\n\n",
           s1,
           s2);
    printf("Периметр первой окружности: %f\tПериметр второй окружности: %f\n\n",
           pir1,
           pir2);

    return 0;
}
