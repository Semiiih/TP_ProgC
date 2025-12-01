#include <stdio.h>

int main(void) {
    int compteur = 5;  // taille du triangle, doit être < 10

    if (compteur <= 0 || compteur >= 10) {
        printf("La valeur de compteur doit être comprise entre 1 et 9.\n");
        return 1;
    }

    /* ======= VERSION AVEC FOR ======= */
    printf("Version avec for (compteur = %d)\n\n", compteur);

    for (int i = 1; i <= compteur; i++) {      // lignes
        for (int j = 1; j <= i; j++) {         // colonnes
            if (i == 1 || i == 2 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    /* ======= VERSION AVEC WHILE ======= */
    printf("\nVersion avec while (compteur = %d)\n\n", compteur);

    int i = 1;
    while (i <= compteur) {                    // lignes
        int j = 1;
        while (j <= i) {                       // colonnes
            if (i == 1 || i == 2 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
