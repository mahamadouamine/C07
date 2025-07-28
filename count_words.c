#include <stdio.h>

int main() {
    char mot[100];
    int compteur = 0;

    printf("Bienvenue à Codeloccol, l'école du code !\n");
    printf("Entrez une phrase (Ctrl+D pour terminer) :\n");

    while (scanf("%s", mot) == 1) {
        compteur++;
    }

    printf("Nombre de mots : %d\n", compteur);

    return 0;
}
