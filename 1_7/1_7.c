#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int i1, i2, i3;
    int ix = 5, iy = -7;
    float f1 = -1.575, f2 = 3.14; 
    char let, symb = 'z', n_str = '\n';
    const float pi = 3.14;

    printf("Введите 3 целых числа\n");
    scanf("%d%d%d", &i1, &i2, &i3);

    printf("Введенное первое число = %d\nВведенное второе число = %d\n Введенное третье число = %d\n", i1, i2, i3);
    printf("Вещественное f1 = %.3f\nВещественное f2 = %.2f\n",
        f1, f2);

    printf("Символ symb = %c\nКод символа %c = %c\n", symb,
        symb, n_str);
    return 0;
}