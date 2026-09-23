#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define P  2.32166 
#define S 2.7076
int main()
{
    setlocale(LC_ALL, "");
    int dym;
    float result;
    float result2;
    float result3;
    printf("Ââåäèòå çíà÷åíèå äëÿ ðàñ÷åòà \n");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d äþéìîâ – ýòî %.2f ñì\n", dym, result);
    result2 = P * dym;
    printf("%d èñïàíñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result2);
    result3 = S * dym;
    printf("%d  Ñòàðëèíîâñêèõ äþéìîâ - ýòî %.2f ñì\n", dym, result3);
    return 0;
}
