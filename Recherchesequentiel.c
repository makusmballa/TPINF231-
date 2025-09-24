#include <stdio.h>
#include <stdlib.h>

int recherche_sequentielle(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i;  // Retourne l'indice où la valeur est trouvée
        }
    }
    return -1;  // Valeur non trouvée
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Taille invalide.\n");
        return 1;
    }

    int *tableau = malloc(n * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    printf("Entrez %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &tableau[i]) != 1) {
            printf("Entrée invalide.\n");
            free(tableau);
            return 1;
        }
    }

    int valeur;
    printf("Entrez la valeur à chercher : ");
    if (scanf("%d", &valeur) != 1) {
        printf("Entrée invalide.\n");
        free(tableau);
        return 1;
    }

    int indice = recherche_sequentielle(tableau, n, valeur);
    if (indice != -1) {
        printf("Valeur %d trouvée à l'indice %d.\n", valeur, indice);
    } else {
        printf("Valeur %d non trouvée dans le tableau.\n", valeur);
    }

    free(tableau);
    return 0;
}
