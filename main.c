#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int n, m, i;
    int *a, *b;
    
    printf("Колво вершин первой фигуры: ");
    scanf("%d\n", &n);
    getchar();
    printf("Колво вершин второй фигуры: ");
    scanf("%d\n", &m);
    getchar();
    
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(m * sizeof(int));

    printf("Введите координаты вершин первой фигуры\n");
    for(i = 0; i < n; i ++)
    {
	scanf("%d", &a[i]);
	printf("\tpoint %d = ", i);
	printf("%d\n", a[i]);
	getchar();
    }

    printf("Введите координаты второй фигуры\n");
    for(i = 0; i < m; i ++)
    {
	scanf("%d", &b[i]);
	printf("\tpoint %d = ", i);
	printf("%d\n", b[i]);
	getchar();
    }

    return 0;
}