//author: Michal Greszta
#include <stdio.h>


int ToMiles(int kph)
{
    kph = kph*0.621371192;

    int temp = kph%5;
    if((temp==1)||(temp==2))
    {
        kph = kph - temp;
    }
    else if((temp==3)||(temp==4))
    {
        kph = kph - temp + 5;
    }

    return kph;
}

int main()
{
    char type[20], lanes[20];
    int v;
    scanf("%s",type);
    scanf("%s",lanes);
    scanf("%d",&v);

    printf("---------------\n");
    printf("|%13s|\n",type);
    printf("|%13s|\n",lanes);
    printf("---------------\n");
    printf("|  km/h|   m/h|\n");
    printf("---------------\n");
    printf("|%6d|%6d|\n",v,ToMiles(v));
    printf("---------------\n");

    return 0;
}
