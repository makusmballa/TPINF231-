#include <stdio.h>

// Fonction pour calculer le produit vectoriel de deux vecteurs 3D
void produit_vectoriel(int u[3], int v[3], int resultat[3]) {
    resultat[0] = u[1] * v[2] - u[2] * v[1];
    resultat[1] = u[2] * v[0] - u[0] * v[2];
    resultat[2] = u[0] * v[1] - u[1] * v[0];
}

int main() {
    int u[3], v[3], res[3];

    printf("Entrez les composantes du vecteur u (x y z) : ");
    scanf("%d %d %d", &u[0], &u[1], &u[2]);

    printf("Entrez les composantes du vecteur v (x y z) : ");
    scanf("%d %d %d", &v[0], &v[1], &v[2]);

    produit_vectoriel(u, v, res);

    printf("Le produit vectoriel u x v est : (%d, %d, %d)\n", res[0], res[1], res[2]);

    return 0;
}
