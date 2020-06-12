//author: Michal Greszta
#include <stdio.h>

int main()
{
    int miesiac, dzienTyg, i, j, k;
    int miesiace[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d", &miesiac, &dzienTyg);

    printf("Miesiac %d\n", miesiac);
    printf("|Ni|Po|Wt|Sr|Cz|Pt|So|\n");
    for(i = 0; i < dzienTyg; i++)
    {
        printf("|  ");
    }
    for(j=1; j<=miesiace[miesiac-1]; j++)
    {
        if ((j+dzienTyg)%7==0)
        {
            printf("|%2d|\n", j);
        }
        else
        {
            printf("|%2d", j);
        }
    }

    int squaresLeft = (dzienTyg + miesiace[miesiac-1])%7;
    if (squaresLeft!=0)
    {
        for(k=0; k < 7-squaresLeft; k++)
        {
            printf("|  ");
        }
        printf("|\n");
    }

    return 0;
}
