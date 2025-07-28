#include <stdio.h>

int main() {
    char mot[100];
    int compteur = 0;

    while (scanf("%s", mot) == 1) {
        compteur++;
    }

    printf("Nombre de mots : %d\n", compteur);

    return 0;
}
