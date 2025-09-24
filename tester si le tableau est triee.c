#include <stdio.h>

int estTrie(int tableau[], int taille) {
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < tableau[i - 1]) {
            return 0; // Le tableau n'est pas trié
        }
    }
    return 1; // Le tableau est trié
}

int main() {
    int taille;

    // Demander à l'utilisateur la taille du tableau
    printf("Entrez la taille du tableau: ");
    scanf("%d", &taille);

    int tableau[taille]; // Déclaration du tableau

    // Saisie des éléments du tableau
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Élément [%d]: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Vérifier si le tableau est trié
    if (estTrie(tableau, taille)) {
        printf("Le tableau est trié en ordre croissant.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }

    return 0;
}