README – Dossier Algorithmique
INF 231_EC2 : STRUCTURE DE DONNEES II
Responsable : PR Melatagia
Objectif du projet
Mettre en œuvre des algorithmes fondamentaux de manipulation de matrices, vecteurs et tableaux en langage C.
Contenu du dossier
1. Somme de deux matrices
Entrées : deux matrices A et B de dimension m × n.
Sortie : une matrice C de même dimension avec C[i][j] = A[i][j] + B[i][j].
Complexité :
Temps : O(m × n)
Espace : O(m × n)
2. Produit Matrice × Vecteur
Fonctionnalités :
Saisie d’une matrice.
Choix du type de vecteur (ligne ou colonne).
Vérification de la compatibilité.
Multiplication.
Résultat : un vecteur ligne ou colonne selon le cas.
3. Recherche séquentielle dans un tableau
But : retrouver un élément x dans un tableau T de n éléments.
Principe : parcourir séquentiellement jusqu’à trouver la valeur ou atteindre la fin.
Complexité :
Temps : O(n)
Espace : O(1)
4. Produit a × b (avec a, b > 0) en utilisant exclusivement +1
Principe : simuler la multiplication par additions successives.
Pseudo-code :
resultat ← 0
Répéter b fois :
resultat ← resultat + a
Complexité : O(b)
5. Tester si un tableau est trié
Entrée : tableau T de n éléments.
Sortie : booléen (vrai si trié croissant, sinon faux).
Principe : vérifier que T[i] ≤ T[i+1] pour tout i.
Complexité : O(n)
6. Médiane d’un tableau
Définition : élément du milieu d’un tableau trié.
Méthode :
Trier le tableau.
Si n impair → prendre T[n/2].
Si n pair → moyenne de T[n/2 - 1] et T[n/2].
Complexité : O(n log n) avec un tri efficace.
7. Inverser un tableau en place
Principe : échanger les éléments symétriques :
T[0] ↔ T[n-1], T[1] ↔ T[n-2], etc.
Complexité :
Temps : O(n)
Espace : O(1)
8. Produit vectoriel (cas 3D)
Formule :
u × v = (u2v3 - u3v2 , u3v1 - u1v3 , u1v2 - u2v1)
Application : géométrie 3D, physique, calculs d’aires orientées.
Complexité : O(1)
9. Produit Vecteur × Matrice
Principe : similaire à Matrice × Vecteur mais dans l’autre sens.
Compatibilité : Vecteur.colonnes = Matrice.lignes.
Résultat : un nouveau vecteur.
Complexité : O(m × n)
Analyse globale des complexités
Algorithme
Temps
Espace
Somme de matrices
O(m × n)
O(m × n)
Produit Matrice × Vecteur
O(m × n)
O(max(m,n))
Recherche séquentielle
O(n)
O(1)
Multiplication par additions
O(b)
O(1)
Vérification tri
O(n)
O(1)
Médiane
O(n log n)
O(n)
Inversion de tableau
O(n)
O(1)
Produit vectoriel (3D)
O(1)
O(1)
Produit Vecteur × Matrice
O(m × n)
O(max(m,n))
Organisation du code en C
Structure de données :
Copier le code
C
#define MAX 100
typedef struct {
    int lignes;
    int colonnes;
    int data[MAX][MAX];
} Matrice;
Fichiers suggérés :
matrices.c : opérations sur matrices.
vecteurs.c : opérations sur vecteurs.
tableaux.c : opérations sur tableaux (recherche, tri, inversion).
main.c : programme principal avec menu utilisateur.
Objectifs pédagogiques
Compréhension approfondie des structures de données en C.
Manipulation des matrices, vecteurs et tableaux.
Analyse de la complexité algorithmique.
Développement d’une logique algorithmique claire et optimisée.
