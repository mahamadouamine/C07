#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    char Caractereàremplacé, Caracterederemplacement;
    int i;

    // Demande de la chaîne à l'utilisateur
   
    fgets(chaine, sizeof(chaine), stdin);

    // Suppression du \n final si présent
    chaine[strcspn(chaine, "\n")] = 0;


    // Demande du caractère à remplacer
   
    scanf(" %c %c", &Caractereàremplacé, &Caracterederemplacement); // Espace avant %c pour consommer le \n précédent

   

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
