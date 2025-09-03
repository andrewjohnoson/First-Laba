#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "rus"); // Данная команда позволяет подключить кодировку русских символов
    printf("Привет. Как дела?\n");
    return 0;
}