#include <stdio.h>

int main() {
    int a, b;
    int resultat = 0;

    // Saisie des entiers
    do {
        printf("Entrez le premier entier positif a : ");
        scanf("%d", &a);
    } while (a <= 0);

    do {
        printf("Entrez le second entier positif b : ");
        scanf("%d", &b);
    } while (b <= 0);

    // Multiplication par addition répétée
    for (int i = 0; i < b; i = i + 1) {
        resultat = resultat + a;
    }

    printf("Le resultat de %d * %d est : %d\n", a, b, resultat);

    return 0;
}
