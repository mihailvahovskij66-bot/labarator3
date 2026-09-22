//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <locale.h>
//#define D 2.54
//#define P 2,32166
//#define S 2,7076
//int main()
//{
//	setlocale(LC_ALL, "");
//	int dym;
//	float result;
//	float result2;
//	float result3;
//	puts("Введите значение для расчета\n");
//	scanf("%d", &dym);
//	result = D * dym;
//	printf("%d дюймов - это %.2f см\n", dym, result);
//	result2 = P * dym;
//	printf("%d испанских дюймов - это %2.f см\n", dym, result2);
//	result3 = S * dym;
//	printf("%d Старлиновских дюймов - это %2.f см\n ", dym, result3);
//	return 0;
//
//
//}



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
    printf("Введите значение для расчета \n");
    scanf("%d", &dym);
    result = D * dym;
    printf("%d дюймов – это %.2f см\n", dym, result);
    result2 = P * dym;
    printf("%d испанских дюймов - это %.2f см\n", dym, result2);
    result3 = S * dym;
    printf("%d  Старлиновских дюймов - это %.2f см\n", dym, result3);
    return 0;
}