#include<stdio.h>
#include<locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, pr;
    printf("Введите первое целое число\n");
    scanf("%d", &a);
    printf("Введите второе целое число\n");
    scanf("%d", &b);
    pr = a * b;
    printf("Произведение равно %d\n", pr);
    return 0;
}