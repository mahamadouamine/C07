#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char Caractereàremplacé, Caracterederemplacement;
    int i;
   scanf(" %s %c %c", chaine, &Caractereàremplacé, &Caracterederemplacement);
   
    // Parcours de la chaîne et remplacement
    for (i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == Caractereàremplacé) {
            chaine[i] = Caracterederemplacement;
        }
    }

    printf("Résultat: %s\n", chaine);

    return 0;
}
