#include <stdio.h>
#include <ctype.h>

int main() {
    char texte[1000];
    int i = 0, compteur = 0;
    int in_mot = 0;

    fgets(texte, sizeof(texte), stdin);

    while (texte[i] != '\0') {
        char c = texte[i];

        if (isalnum(c)) {
            if (!in_mot) {
                compteur++;
                in_mot = 1;
            }
        }
       
        else if (isspace(c) || ispunct(c)) {
            in_mot = 0;
        }

        i++;
    }

    printf("Nombre de mots : %d\n", compteur);

    return 0;
}
