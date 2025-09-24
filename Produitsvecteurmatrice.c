#include <stdio.h>

#define MAX 10

typedef struct {
    int lignes;
    int colonnes;
    int data[MAX][MAX];
} Matrice;

// Lecture d'une matrice
void lireMatrice(Matrice *M) {
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &M->lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &M->colonnes);

    printf("Entrez les éléments :\n");
    for(int i = 0; i < M->lignes; i++) {
        for(int j = 0; j < M->colonnes; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &M->data[i][j]);
        }
    }
}

// Lecture d’un vecteur préconfiguré
void lireVecteur(Matrice *V, int type, int taille) {
    if(type == 1) { // vecteur ligne
        V->lignes = 1;
        V->colonnes = taille;
    } else { // vecteur colonne
        V->lignes = taille;
        V->colonnes = 1;
    }

    printf("Entrez les %d éléments du vecteur %s :\n", taille, (type == 1 ? "ligne" : "colonne"));
    for(int i = 0; i < V->lignes; i++) {
        for(int j = 0; j < V->colonnes; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &V->data[i][j]);
        }
    }
}

void afficherMatrice(Matrice M) {
    for(int i = 0; i < M.lignes; i++) {
        for(int j = 0; j < M.colonnes; j++) {
            printf("%d\t", M.data[i][j]);
        }
        printf("\n");
    }
}

// Produit : vecteur ligne × matrice
Matrice produitVecteurLigneMatrice(Matrice vecteur, Matrice matrice) {
    Matrice resultat;

    if(vecteur.lignes != 1 || vecteur.colonnes != matrice.lignes) {
        printf("Erreur : dimensions incompatibles pour vecteur ligne × matrice !\n");
        resultat.lignes = 0;
        resultat.colonnes = 0;
        return resultat;
    }

    resultat.lignes = 1;
    resultat.colonnes = matrice.colonnes;

    for(int j = 0; j < matrice.colonnes; j++) {
        resultat.data[0][j] = 0;
        for(int i = 0; i < matrice.lignes; i++) {
            resultat.data[0][j] += vecteur.data[0][i] * matrice.data[i][j];
        }
    }

    return resultat;
}

// Produit : matrice × vecteur colonne
Matrice produitMatriceVecteurColonne(Matrice matrice, Matrice vecteur) {
    Matrice resultat;

    if(vecteur.colonnes != 1 || matrice.colonnes != vecteur.lignes) {
        printf("Erreur : dimensions incompatibles pour matrice × vecteur colonne !\n");
        resultat.lignes = 0;
        resultat.colonnes = 0;
        return resultat;
    }

    resultat.lignes = matrice.lignes;
    resultat.colonnes = 1;

    for(int i = 0; i < matrice.lignes; i++) {
        resultat.data[i][0] = 0;
        for(int j = 0; j < matrice.colonnes; j++) {
            resultat.data[i][0] += matrice.data[i][j] * vecteur.data[j][0];
        }
    }

    return resultat;
}

int main() {
    Matrice vecteur, matrice, resultat;
    int choix;

    printf("=== MATRICE ===\n");
    lireMatrice(&matrice);

    printf("\nChoisissez le type de vecteur :\n");
    printf("1. Vecteur ligne (1 × n)\n");
    printf("2. Vecteur colonne (n × 1)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if(choix == 1) {
        lireVecteur(&vecteur, 1, matrice.lignes);
        resultat = produitVecteurLigneMatrice(vecteur, matrice);
    } else if(choix == 2) {
        lireVecteur(&vecteur, 2, matrice.colonnes);
        resultat = produitMatriceVecteurColonne(matrice, vecteur);
    } else {
        printf("Choix invalide.\n");
        return 1;
    }

    if(resultat.lignes != 0) {
        printf("\nRésultat du produit :\n");
        afficherMatrice(resultat);
    }

    return 0;
}
