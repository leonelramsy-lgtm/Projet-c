  #include <stdio.h>

#define MAX 10 // Taille maximale des matrices

  void lireMatrice(int matrice[MAX][MAX], int lignes, int colonnes) {
    printf("Entrez les éléments de la matrice (%d x %d) :\n", lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Element [%d][%d] : ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void afficherMatrice(int matrice[MAX][MAX], int lignes, int colonnes) {
    printf("Matrice (%d x %d) :\n", lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void sommeMatrices(int matriceA[MAX][MAX], int matriceB[MAX][MAX], int resultat[MAX][MAX], int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            resultat[i][j] = matriceA[i][j] + matriceB[i][j];
        }
    }
}

int main() {
    int matriceA[MAX][MAX], matriceB[MAX][MAX], resultat[MAX][MAX];
    int lignes, colonnes;

    printf("Entrez le nombre de lignes et de colonnes des matrices (max %d) : ", MAX);
    scanf("%d %d", &lignes, &colonnes);

    printf("Saisie de la première matrice:\n");
    lireMatrice(matriceA, lignes, colonnes);

    printf("Saisie de la deuxième matrice:\n");
    lireMatrice(matriceB, lignes, colonnes);

    sommeMatrices(matriceA, matriceB, resultat, lignes, colonnes);

    printf("La somme des matrices est :\n");
    afficherMatrice(resultat, lignes, colonnes);

    return 0;
}