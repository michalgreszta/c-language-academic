//author: Michal Greszta
#include <stdio.h>

int main(void)
{
    float waga, wzrost;
    scanf("%f", &waga);
    scanf("%f", &wzrost);

    printf("%.2f", waga/(wzrost*wzrost));
    return 0;
}
