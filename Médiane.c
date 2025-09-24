#include <stdio.h>
#include <stdlib.h>

// Fonction pour trier un tableau (tri à bulle)
void tri_bulle(int liste[], int taille) {
    int a, b, temp;
    for (a = 0; a < taille - 1; a++) {
        for (b = 0; b < taille - a - 1; b++) {
            if (liste[b] > liste[b + 1]) {
                temp = liste[b];
                liste[b] = liste[b + 1];
                liste[b + 1] = temp;
            }
        }
    }
}

int main() {
    int longueur, idx;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &longueur);

    int valeurs[longueur];
    printf("Entrez les éléments du tableau :\n");
    for (idx = 0; idx < longueur; idx++)
        scanf("%d", &valeurs[idx]);

    tri_bulle(valeurs, longueur);

    double resultat_mediane;
    if (longueur % 2 == 0)
        resultat_mediane = (valeurs[longueur/2 - 1] + valeurs[longueur/2]) / 2.0;
    else
        resultat_mediane = valeurs[longueur/2];

    printf("La médiane est : %.2f\n", resultat_mediane);

    return 0;
}
