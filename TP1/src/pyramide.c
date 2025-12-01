#include <stdio.h>

int main(void) {
    int n = 5;   // hauteur de la pyramide (modifiable)
    int i, j;

    printf("Pyramide de hauteur %d :\n\n", n);

    for (i = 1; i <= n; i++) {

        /* ---- 1. Espaces pour centrer ---- */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        /* ---- 2. Nombres croissants ---- (1 → i) */
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        /* ---- 3. Nombres décroissants ---- (i-1 → 1) */
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        /* ---- 4. Ligne suivante ---- */
        printf("\n");
    }

    printf("\nPyramide terminée.\n");

    return 0;
}

