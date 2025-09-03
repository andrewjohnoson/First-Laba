#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    float a, vol, sq;
    printf("Введите размер стороны куба: \n");
    scanf("%f", &a);
    vol = pow(a, 3); // возведение в степень
    sq = 4 * pow(a, 2);
    printf("Объём куба - %.3f, площадь боковой поверхности - %.3f", vol, sq); // с помощью спецификации преобразования %.3f происходит вывод числа с точностью до 3-х знаков
    return 0;
}