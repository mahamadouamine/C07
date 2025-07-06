#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char Caractereàremplacé, Caracterederemplacement;
    int i;

    // Demande de la chaîne à l'utilisateur
   
    // fgets(chaine, sizeof(chaine), stdin);
   scanf(" %s %c %c", chaine, &Caractereàremplacé, &Caracterederemplacement);
   
    // Parcours de la chaîne et remplacement
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == Caractereàremplacé) {
            chaine[i] = Caracterederemplacement;
        }
    }

    // Affichage de la chaîne modifiée
    printf("Résultat: %s\n", chaine);

    return 0;
}
