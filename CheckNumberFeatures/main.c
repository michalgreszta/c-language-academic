//author: Michal Greszta
#include <stdio.h>
#include <math.h>

void checkPrime(int liczba)
{
   int divNumber = 0;
   int j = liczba/2 + 1;
   int k;

   for(k=2; k<=j; k++)
    {
      if((liczba!=2)&&(!(liczba%k)))
      {
         if(divNumber == 0)
         {
            printf("divisors: ");
            divNumber++;
         }
         printf("%d,", k);
      }
    }
   if((liczba == 2)||(divNumber == 0 && liczba > 1))
   {
        printf("prime number\n");
   }

   else if(1 < liczba)
   {
        printf("\n");
   }
}
void checkFact(int liczba)
{
   int factorial = 1, multiplier = 2;
   while(factorial < liczba)
   {
      factorial = factorial*(multiplier++);
   }
   if(factorial == liczba)
   {
       printf("factorial number\n");
   }
}
void checkFib(int liczba)
{
   int poprzedni1 = 0, poprzedni2= 0,  n= 1;
   while(poprzedni1 < liczba)
   {
      poprzedni2 = poprzedni1;
      poprzedni1 = n;
      n = poprzedni1+poprzedni2;
   }
   if(liczba == poprzedni1)
      printf("fibonacci number\n");
}
void checkAutomorph(int liczba)
{
   int lenLib = 0, n = liczba;
   long int k = liczba*liczba;
   while(n != 0)
   {
      lenLib++;
      n = n/10;
   }
   if(k%(int)pow(10, lenLib) == liczba)
   {
      printf("automorphic number\n");
   }
}
int main()
{
   int liczba;
   if(1 != scanf("%d", &liczba))
   {
        printf("Nothing read!\n");
   }
   else
   {
      if(liczba == -1)
      {
        printf("%d = 01777777777777777777777 = 0xffffffffffffffff", liczba);
      }
      else
      {
         printf("%d = 0%o = 0x%x\n", liczba, liczba, liczba);
         checkPrime(liczba);
         checkFact(liczba);
         checkFib(liczba);
         checkAutomorph(liczba);
      }
   }
   return 0;
}
