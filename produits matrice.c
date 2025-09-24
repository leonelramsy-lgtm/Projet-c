#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols, char name) {
    printf("Entrez les éléments de la matrice %c (%dx%d) :\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Élément [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int first[10][10], int second[10][10], int result[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int first[10][10], second[10][10], result[10][10];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Entrez le nombre de lignes de la matrice A: ");
    scanf("%d", &rowFirst);
    printf("Entrez le nombre de colonnes de la matrice A: ");
    scanf("%d", &columnFirst);

    inputMatrix(first, rowFirst, columnFirst, 'A');

    printf("Entrez le nombre de lignes de la matrice B: ");
    scanf("%d", &rowSecond);
    printf("Entrez le nombre de colonnes de la matrice B: ");
    scanf("%d", &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Erreur : Le nombre de colonnes de la matrice A doit être égal au nombre de lignes de la matrice B.\n");
        return 1;
    }

    inputMatrix(second, rowSecond, columnSecond, 'B');

    multiplyMatrices(first, second, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("Le produit des matrices A et B est :\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}