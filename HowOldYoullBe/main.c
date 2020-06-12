//author: Michal Greszta
//Give me your day of birth and I'll tell you how old you are and how old you'll be in a specific time
#include <stdio.h>

int main(void)
{
    char* imie;
    int uDzien, uMies, uRok, oMies, oRok, miesDoPrzodu;
    scanf("%s", &imie);
    scanf("%d %d %d", &uDzien, &uMies, &uRok);
    scanf("%d %d", &oMies, &oRok);
    scanf("%d", &miesDoPrzodu);

    printf("%s ma %d lat i %d miesiecy\n", &imie, ((oMies+oRok*12)-(uMies+uRok*12))/12, ((oMies+oRok*12)-(uMies+uRok*12))%12);
    printf("za %d miesiecy %s bedzie mial %d lat i %d miesiecy\n", miesDoPrzodu, &imie, ((oMies+oRok*12)-(uMies+uRok*12)+miesDoPrzodu)/12, ((oMies+oRok*12)-(uMies+uRok*12)+miesDoPrzodu)%12);
    return 0;
}
