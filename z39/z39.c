#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    float h, t, g = 10;
    printf("Введите высоту, с которой падает камень: \n");
    scanf("%f", &h);
    t = sqrt(2 * h / g);
    printf("Время падения - %.2f секунд", t);
    return 0;
}