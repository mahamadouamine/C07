#include <stdio.h>

int main() {
    char chaine1[50], chaine2[50];
    int i;
    int resultat = 1;
   
    scanf("%s", chaine1); 
   
    scanf("%s", chaine2);



    i = 0;
    while (chaine1[i] != '\0' || chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            resultat = 0;
            break;
        }
        i++;
    }


    if (resultat) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}