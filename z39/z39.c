#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float h, t;
    printf("Введите высоту, с которой падает камень: \n");
    scanf("%f", &h);
    t = sqrt(2 * h / 10);
    printf("Время падения - %.2f секунд", t);
    return 0;
}