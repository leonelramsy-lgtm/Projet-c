#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        // Ajoute a, b fois
        result = result + a; // On utilise '+' ici, car +1 est utilisé dans la boucle
    }
    return result;
}

int main() {
    int a, b;

    // Demande à l'utilisateur d'entrer deux nombres
    printf("Entrer le premier nombre (a > 0) : ");
    scanf("%d", &a);
    printf("Entrer le deuxième nombre (b > 0) : ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        int result = multiply(a, b);
        printf("%d × %d = %d\n", a, b, result);
    } else {
        printf("Les deux nombres doivent être supérieurs à 0.\n");
    }

    return 0;
}