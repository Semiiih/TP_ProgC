
#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '&';   // Change cette valeur pour tester : + - * / % & | ~

    int resultat = 0;

    printf("num1 = %d, num2 = %d, op = '%c'\n", num1, num2, op);

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("Addition : %d\n", resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("Soustraction : %d\n", resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("Multiplication : %d\n", resultat);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zéro !\n");
            } else {
                resultat = num1 / num2;
                printf("Division : %d\n", resultat);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zéro !\n");
            } else {
                resultat = num1 % num2;
                printf("Modulo : %d\n", resultat);
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("ET binaire : %d\n", resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("OU binaire : %d\n", resultat);
            break;

        case '~':
            printf("NON binaire appliqué seulement à num1 : %d\n", ~num1);
            break;

        default:
            printf("Erreur : opérateur inconnu !\n");
            break;
    }

    return 0;
}
