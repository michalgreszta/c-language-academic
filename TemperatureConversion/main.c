//author: Michal Greszta
#include <stdio.h>

int main()
{
    float liczba;
    scanf("%f", &liczba);
    printf("%.2fC = %.2fF = %.2fK\n", liczba, liczba*1.8+32, liczba+273.15);
    printf("%.2fF = %.2fC = %.2fK\n", liczba, (liczba-32)*5/9, (liczba-32)*5/9+273.15);
    printf("%.2fK = %.2fC = %.2fF\n", liczba, liczba-273.15, (liczba-273.15)*1.8+32);
    return 0;
}
