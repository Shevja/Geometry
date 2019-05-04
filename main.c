#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define PI 3.14

void area(float r1)
{
    float s = PI * r1;
    printf("Площадь фигуры равна %f\n", &s);
}

int main()
{
    float x1, x2, y1, y2, r1, r2; // s1, s2;

    printf("Введите координаты (x и y) центра первой окружности: \n");
    scanf("%f %f", &x1, &y1);
    printf("Введите радиус первой окружности: \n");
    scanf("%f", &r1);
    printf("Введите координаты (x и y) центра второй окружности: \n");
    scanf("%f%f", &x2, &y2);
    printf("Введите радиус второй окружности: \n");
    scanf("%f", &r2);
    
    if ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) > (r1+r2)*(r1+r2))
	printf("Фигуры не пересекаются\n");
    else 
	printf("Фигуры пересекаются\n");

    area(r1);
    



/*    printf("Колво вершин первой фигуры:\n ");
    scanf("%d", &n);
    printf("Колво вершин второй фигуры:\n ");
    scanf("%d", &m);
    
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(m * sizeof(int));

    printf("Введите координаты вершин первой фигуры\n");
    for(i = 0; i < n; i ++)
    {
	scanf("%d", &a[i]);
	printf("\tpoint %d = ", i);
	printf("%d\n", a[i]);
    }

    printf("Введите координаты второй фигуры\n");
    for(i = 0; i < m; i ++)
    {
	scanf("%d", &b[i]);
	printf("\tpoint %d = ", i);
	printf("%d\n", b[i]);
    }*/
    
    

    return 0;
}