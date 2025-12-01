#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    int addition      = a + b;
    int soustraction  = a - b;
    int multiplication = a * b;
    int division      = a / b;   // division entière
    int modulo        = a % b;

    bool egal         = (a == b);
    bool superieur    = (a > b);

    printf("a = %d, b = %d\n\n", a, b);

    printf("a + b = %d\n", addition);
    printf("a - b = %d\n", soustraction);
    printf("a * b = %d\n", multiplication);
    printf("a / b = %d\n", division);
    printf("a %% b = %d\n\n", modulo);

    printf("a == b ? %d (1 = vrai, 0 = faux)\n", egal);
    printf("a >  b ? %d (1 = vrai, 0 = faux)\n", superieur);

    return 0;
}
