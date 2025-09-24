#include <stdio.h>

#define MAX 10  // taille maximale des lignes/colonnes

// Définition de la structure
typedef struct {
    int lignes;
    int colonnes;
    int data[MAX][MAX];
} Matrice;

// Fonction pour lire une matrice
void lireMatrice(Matrice *M) {
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &M->lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &M->colonnes);

    printf("Entrez les elements de la matrice :\n");
    for(int i=0; i<M->lignes; i++){
        for(int j=0; j<M->colonnes; j++){
            printf("[%d][%d] = ", i, j);
            scanf("%d", &M->data[i][j]);
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(Matrice M) {
    for(int i=0; i<M.lignes; i++){
        for(int j=0; j<M.colonnes; j++){
            printf("%d\t", M.data[i][j]);
        }
        printf("\n");
    }
}

// Fonction pour sommer deux matrices
Matrice sommeMatrice(Matrice A, Matrice B) {
    Matrice C;
    C.lignes = A.lignes;
    C.colonnes = A.colonnes;

    for(int i=0; i<A.lignes; i++){
        for(int j=0; j<A.colonnes; j++){
            C.data[i][j] = A.data[i][j] + B.data[i][j];
        }
    }
    return C;
}

int main() {
    Matrice A, B, C;

    printf("=== MATRICE A ===\n");
    lireMatrice(&A);

    printf("=== MATRICE B ===\n");
    lireMatrice(&B);

    if(A.lignes == B.lignes && A.colonnes == B.colonnes) {
        C = sommeMatrice(A, B);
        printf("\nSomme des deux matrices :\n");
        afficherMatrice(C);
    } else {
        printf("\nErreur : les matrices doivent avoir la meme dimension !\n");
    }

    return 0;
}
