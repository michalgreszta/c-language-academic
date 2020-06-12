//author: Michal Greszta
//Give me number of hours and I'll convert it into number of weeks, days etc.
#include <stdio.h>
#define SECINHOUR 3600

long int getSeconds(long int hours)
{
    return hours*SECINHOUR;
}

int main(void)
{
    long int tygodni, dni, godzin, minut, sekund;
    long int liczba;
    scanf("%ld", &liczba);
    printf("%ld hours = %ld\n", liczba, getSeconds(liczba));
    tygodni = liczba/604800;
    dni = (liczba%604800)/86400;
    godzin = (liczba%604800)%86400/3600;
    minut = ((liczba%604800)%86400)%3600/60;
    sekund = ((liczba%604800)%86400)%3600%60;
    printf("%ld seconds = %ld weeks %ld days %02ld:%02ld:%02ld\n", liczba, tygodni, dni, godzin, minut, sekund);
    return 0;
}
