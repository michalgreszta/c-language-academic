//author: Michal Greszta

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main(void)
{

   printf("sizeof(int) = %d in [%d, %d]\n",(int)sizeof(int),INT_MIN,INT_MAX);
   printf("sizeof(unsigned) = %d in [%d, %u]\n",(int)sizeof(unsigned int),0,UINT_MAX);
   printf("sizeof(long) = %d in [%ld, %ld]\n",(int)sizeof(long int),LONG_MIN,LONG_MAX);
   printf("sizeof(unsigned long) = %d in [%d, %lu]\n",(int)sizeof(unsigned long int),0,ULONG_MAX);
   printf("sizeof(short) = %d in [%hd, %hd]\n",(int)sizeof(short int),SHRT_MIN,SHRT_MAX);
   printf("sizeof(unsigned short) = %d in [%d, %hu]\n",(int)sizeof(short unsigned int),0,USHRT_MAX);
   printf("sizeof(char) = %d in [%d, %d]\n",(int)sizeof(char),CHAR_MIN,CHAR_MAX);
   printf("sizeof(unsigned char) = %d in [%d, %d]\n",(int)sizeof(unsigned char),0,UCHAR_MAX);
   printf("sizeof(signed char) = %d in [%d, %d]\n",(int)sizeof(signed char),SCHAR_MIN, SCHAR_MAX);
   printf("sizeof(long long) = %d in [%lld, %lld]\n",(int)sizeof(long long int),LLONG_MIN, LLONG_MAX);
   printf("sizeof(long long unsigned) = %d in [%d, %llu]\n\n",(int)sizeof(unsigned long long int),0,ULLONG_MAX);
   printf("sizeof(float) = %d in [%e, %e]\n",(int)sizeof(float),FLT_MIN, FLT_MAX);
   printf("sizeof(double) = %d in [%e, %e]\n",(int)sizeof(double),DBL_MIN,DBL_MAX);
   printf("sizeof(long double) = %d in [%Le, %Le]\n\n",(int)sizeof(long double),LDBL_MIN,LDBL_MAX);
   printf("sizeof(int_fast16_t) = %d in [%ld, %ld]\n",(int)sizeof(int_fast16_t),INT_FAST16_MIN,INT_FAST16_MAX);
   printf("sizeof(int_least16_t) = %d in [%d, %d]\n",(int)sizeof(int_least16_t),INT_LEAST16_MIN,INT_LEAST16_MAX);

   return 0;
}

