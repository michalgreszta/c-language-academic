//author: Michal Greszta
#include <stdio.h>


int ToMiles(int kph)
{
    float temp = kph*0.621371192;
    int temp1 = kph*0.621371192;
    if(temp-temp1>0.5)
    {
        temp1++;
    }
    return temp1;
}

int velocity[5] = {140, 100, 90, 50, 20};

int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("------------------\n");
        printf("|%4dkm/h|%4dm/h|\n",velocity[i],ToMiles(velocity[i]));
    }
    printf("------------------");

    return 0;
}
