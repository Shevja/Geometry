#include <malloc.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int area(float r1, float pi)
{
    float s = pi * r1;

    // printf("%f\n\n", s);
    return s;
}

int cintfig(float x1, float x2, float y1, float y2, float r1, float r2)
{
    if ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) > (r1 + r2) * (r1 + r2))
        return 1;
    else
        return 0;
}

int perim(float r1, float pi)
{
    float s = 2 * pi * r1;

    // printf("%f\n\n", s);
    return s;
}
