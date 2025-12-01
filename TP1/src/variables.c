#include <stdio.h>

int main(void) {
    /* Types caractères */
    signed char c_signed = -10;
    unsigned char c_unsigned = 200;

    /* Types entiers courts */
    signed short s_signed = -300;
    unsigned short s_unsigned = 600;

    /* Types entiers */
    signed int i_signed = -1000;
    unsigned int i_unsigned = 1000U;

    /* Types long */
    signed long int l_signed = -200000L;
    unsigned long int l_unsigned = 200000UL;

    /* Types long long */
    signed long long int ll_signed = -9000000000LL;
    unsigned long long int ll_unsigned = 9000000000ULL;

    /* Types à virgule flottante */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    printf("=== Types entiers ===\n\n");
    printf("signed char          : %d\n", c_signed);
    printf("unsigned char        : %u\n\n", c_unsigned);

    printf("signed short         : %hd\n", s_signed);
    printf("unsigned short       : %hu\n\n", s_unsigned);

    printf("signed int           : %d\n", i_signed);
    printf("unsigned int         : %u\n\n", i_unsigned);

    printf("signed long int      : %ld\n", l_signed);
    printf("unsigned long int    : %lu\n\n", l_unsigned);

    printf("signed long long int : %lld\n", ll_signed);
    printf("unsigned long long   : %llu\n\n", ll_unsigned);

    printf("=== Types flottants ===\n\n");
    printf("float                : %f\n", f);
    printf("double               : %lf\n", d);
    printf("long double          : %Lf\n", ld);

    return 0;
}
