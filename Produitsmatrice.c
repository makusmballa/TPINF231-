#include <stdio.h>

int main() {
    int ligne1, col1, ligne2, col2;
    int x, y, z;

    printf("Entrez le nombre de lignes de la première matrice : ");
    scanf("%d", &ligne1);
    printf("Entrez le nombre de colonnes de la première matrice : ");
    scanf("%d", &col1);

    printf("Entrez le nombre de lignes de la deuxième matrice : ");
    scanf("%d", &ligne2);
    printf("Entrez le nombre de colonnes de la deuxième matrice : ");
    scanf("%d", &col2);

    if (col1 != ligne2) {
        printf("Multiplication impossible : le nombre de colonnes de la première matrice doit être égal au nombre de lignes de la deuxième matrice.\n");
        return 1;
    }

    int matrice1[ligne1][col1], matrice2[ligne2][col2], produit[ligne1][col2];

    printf("Entrez les éléments de la première matrice :\n");
    for (x = 0; x < ligne1; x++)
        for (y = 0; y < col1; y++)
            scanf("%d", &matrice1[x][y]);

    printf("Entrez les éléments de la deuxième matrice :\n");
    for (x = 0; x < ligne2; x++)
        for (y = 0; y < col2; y++)
            scanf("%d", &matrice2[x][y]);

    // Initialiser la matrice produit à zéro
    for (x = 0; x < ligne1; x++)
        for (y = 0; y < col2; y++)
            produit[x][y] = 0;

    // Calcul du produit
    for (x = 0; x < ligne1; x++)
        for (y = 0; y < col2; y++)
            for (z = 0; z < col1; z++)
                produit[x][y] += matrice1[x][z] * matrice2[z][y];

    printf("Produit des matrices :\n");
    for (x = 0; x < ligne1; x++) {
        for (y = 0; y < col2; y++)
            printf("%d\t", produit[x][y]);
        printf("\n");
    }

    return 0;
}
