#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float a, b;
    printf("Введите число a: ");
    scanf("%f", &a);        
    printf("Введите число b: ");
    scanf("%f", &b);        
    printf("+------------+------------+------------+\n");
    printf("|   a * b    |   a + b    |   a - b    |\n");
    printf("+------------+------------+------------+\n");
    printf("| %.0f * %.0f      | %.0f + %.0f      | %.0f - %.0f      |\n", a, b, a, b, a, b);
    printf("+------------+------------+------------+\n");
    printf("| %-10.0f | %-10.0f | %-10.0f |\n", a * b, a + b, a - b);
    printf("+------------+------------+------------+\n");
    return 0;
}