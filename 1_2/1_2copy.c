/* Из-за того, что я пользуюсь операционной системой macOS,
    которая является Unix-системой, то пользоваться библиотекой
    "conio.h", который является файлом заголовка в DOS-системах,
    я не имею возможности. Зайдя в интернет я обнаружил следующий способ
    воспользоваться функцией getch(). */
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

char getch(void)
{
    struct termios oldt, newt;
    int ch;

    // Получаем текущие настройки терминала
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    // Отключаем вывод символов на экран
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Читаем символ
    ch = getchar();

    // Восстанавливаем настройки терминала
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    return ch;
}

int main () {
    char c = getch();
    printf("%c", c);
    return 0;
}