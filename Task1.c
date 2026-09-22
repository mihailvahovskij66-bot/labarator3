#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int num, num2;

    puts("введите  число");
    scanf("%d", &num);
    printf("Введено число %d\n", num);

    puts("введите второе число");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);
    printf("Сумма двух чисел= %d\n", num + num2);
    int raznost;
    if (num > num2)
    {
        printf("Разность = %d\n", num - num2);
    }
    else
    {
        printf("Разность двух числе = %d\n", num2 - num);
    }
    printf("Произведение двух чисел= %d\n", num * num2);
    int delen;
    if (num != 0)
    {
        printf("Деление нацело второго числа на первое = %d\n", num2 / num);
        printf("Остаток деления второго числа на первое =%d\n", num2 % num);
    }
    else
    {
        printf("Делить на ноль нельзя");
    }
    return 0;
}