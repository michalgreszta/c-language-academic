//author: Michal Greszta
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void check(int dlugosc)
{
    if(dlugosc <= 0)
    {
        printf("Read value not greater than zero!");
        exit(0);
    }
}

int main(void)
{
    int figura;
    if (1 != scanf("%d", &figura))
    {
        printf("Nothing read!");
        return 0;
    }

    if (figura<1 || figura>4)
    {
        printf("Choose out of range!");
        return 0;
    }

    int dlugosc1, dlugosc2;
    switch (figura)
    {
    case 1:
        if(1 == scanf(" %d", &dlugosc1))
        {
            if(dlugosc1 <= 0)
                printf("Read value not greater than zero!\n");
            else
            {
                printf("Square:\n");
                printf("area = %.2f\n", (double)dlugosc1*dlugosc1);
                printf("perimeter = %.2f\n", (double)dlugosc1*4);
            }
        }
        else
            printf("Nothing read!\n");

        break;
    case 2:
        if(1 == scanf(" %d", &dlugosc1))
        {
            if(dlugosc1 <= 0)
                printf("Read value not greater than zero!\n");
            else
            {
                printf("Circle:\n");
                printf("area = %.2f\n", M_PI*dlugosc1*dlugosc1);
                printf("perimeter = %.2f\n", 2*M_PI*dlugosc1);
            }
        }
        else
            printf("Nothing read!\n");

        break;
    case 3:
        if(2 == scanf(" %d %d", &dlugosc1, &dlugosc2))
        {
            if(dlugosc1 <= 0 || dlugosc2 <= 0)
                printf("Read value not greater than zero!\n");
            else
            {
                printf("Triangle:\n");
                printf("area = %.2f\n", 0.5*dlugosc2*dlugosc1);
                printf("perimeter = %.2f\n", sqrt(dlugosc2*dlugosc2 + dlugosc1*dlugosc1)+dlugosc1+dlugosc2);
            }
        }
        else
            printf("Nothing read!\n");

        break;
    case 4:
        if(2 == scanf(" %d %d", &dlugosc1, &dlugosc2))
        {
            if(dlugosc1 <= 0 || dlugosc2 <= 0)
                printf("Read value not greater than zero!\n");
            else
            {
                printf("Rectangle:\n");
                printf("area = %.2f\n", (double)dlugosc1*dlugosc2);
                printf("perimeter = %.2f\n", (double)2*dlugosc1 + (double)2*dlugosc2);
            }
        }
        else
            printf("Nothing read!\n");

        break;
    }

    return 0;
}
