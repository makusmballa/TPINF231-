#include<stdio.h>
int main() {
    float tab[] = {2, 4, 5, 9, 12, 22, 25, 30, 51, 6};
    int tri1 = 0; // indicateur de non-croissance
    int tri2 = 0; // indicateur de non-decroissance
    int taille = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < taille - 1; i++) {
        if (tab[i] > tab[i + 1]) tri1 = 1;
        if (tab[i] < tab[i + 1]) tri2 = 1;
    }

    if (tri1 == 0 || tri2 == 0) {
        printf("Le tableau est trie!\n");
    } else {
        printf("Le tableau n'est pas trie!\n");
    }

    return 0;
}
