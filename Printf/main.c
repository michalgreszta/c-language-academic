//author: Michal Greszta

#include <stdio.h>

int main()
{
    int i;
    int pacz = 0;
    printf("%d\n",pacz);
    pacz--;
    printf("%d\n",pacz);
    scanf("%d",&i);
    printf("%d\n",i);//1
    printf("%o\n",i);//2
    printf("%x\n",i);//3
    printf("%10d\n",i);//4
    printf("%+d\n",i);//5
    printf("%-10d\n",i);//6
    printf("% d\n",i);//7
    printf("%d = %#o = %#x\n",i,i,i);//8
    printf("\"%-+5d\"\n",i);//9
    return 0;
}
