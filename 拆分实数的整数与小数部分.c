#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void splitfloat(float x, int* intpart, float* fracpart);

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}

/* 你的代码将被嵌在这里 2.718*/
void splitfloat(float x, int* intpart, float* fracpart)
{
    *fracpart = x - (int)x;
    *intpart = (int)x;
}