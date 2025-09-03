#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "rus");
    float x, y, z, h, a, b, c, d;
    printf("Введите x, y, z\n");
    scanf("%f%f%f", &x, &y, &z);
    a = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z)));
    b = 1 + fabs(y - x);
    c = (pow(fabs(y - x), 2)) / 2;
    d = (pow(fabs(y - x), 3)) / 3;
    h = a * b + c - d;
    printf("h = %.5f\n", h);
    return 0;
}