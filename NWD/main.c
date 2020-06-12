//author: Michal Greszta
#include <stdio.h>

int gcd(int a, int b)
{
    int m = 1;
    while(m != 0)
    {
        m = a%b;
        a = b;
        b = m;
    }
    return a;
}


int main(void)
{
    int liczbaOb, a, b;
    if(1 != scanf("%d", &liczbaOb))
    {
        printf("Impossible to read!");
        return 0;
    }

    while(liczbaOb--)
    {
        if(2 != scanf("%d %d", &a, &b))
        {
            printf("Impossible to read!");
            return 0;
        }

        if ((a<=0)||(b<=0))
            {
                printf("One of argument is less or equal 0!");
                return 0;
            }
        printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    }

    return 0;
}
