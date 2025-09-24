#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

float calculerMediane(int *tableau, int taille) {
    // Trier le tableau
    qsort(tableau, taille, sizeof(int), compare);

    // Vérifier si la taille est paire ou impaire
    if (taille % 2 == 0) {
        return (tableau[taille / 2 - 1] + tableau[taille / 2]) / 2.0;
    } else {
        return tableau[taille / 2];
    }
}

int main() {
    int taille;

    // Demander à l'utilisateur la taille du tableau
    printf("Entrez la taille du tableau: ");
    scanf("%d", &taille);

    // Allouer de la mémoire pour le tableau
    int *tableau = (int *)malloc(taille * sizeof(int));
    if (tableau == NULL) {
        fprintf(stderr, "Erreur d'allocation de mémoire.\n");
        return 1;
    }

    // Demander à l'utilisateur de saisir les valeurs
    printf("Entrez les %d valeurs du tableau:\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Valeur %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    float mediane = calculerMediane(tableau, taille);
    printf("La médiane du tableau est: %.2f\n", mediane);

    // Libérer la mémoire allouée
    free(tableau);

    return 0;
}