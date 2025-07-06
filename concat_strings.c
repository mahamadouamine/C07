#include <stdio.h>
#include <string.h>

int main() {
    char chaine1[50], chaine2[50], resultat[100];
    scanf("%s", chaine1);
    scanf("%s", chaine2);
    sprintf(resultat, "%s%s", chaine1, chaine2);
    printf(" %s\n", resultat);
    return 0;
}