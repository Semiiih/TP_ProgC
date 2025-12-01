#include <stdio.h>

void print_binary(unsigned int n) {
    int started = 0;  // pour ignorer les zéros de tête
    int total_bits = sizeof(unsigned int) * 8;  // en général 32 bits

    for (int i = total_bits - 1; i >= 0; i--) {
        unsigned int mask = 1u << i;

        if (n & mask) {
            putchar('1');
            started = 1;
        } else if (started) {
            putchar('0');
        }
    }

    // Si le nombre vaut 0, on n’a jamais activé "started"
    if (!started) {
        putchar('0');
    }
}

int main(void) {
    unsigned int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int nb_valeurs = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < nb_valeurs; i++) {
        unsigned int n = valeurs[i];
        printf("Décimal : %u -> Binaire : ", n);
        print_binary(n);
        putchar('\n');
    }

    return 0;
}
