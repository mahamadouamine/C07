#include <stdio.h>

int main() {
  char chaine[50]; // Exemple de chaîne
  int debut = 0;
  int fin = 0;
  int Palindrome = 1; // Assume que c'est un palindrome au départ
  scanf("%s", chaine);
  // Calculer la longueur de la chaîne sans utiliser strlen
  while (chaine[fin] != '\0') {
    fin++;
  }
  fin--; // Ajuster pour que 'fin' pointe sur le dernier caractère

  // Comparer les caractères en partant des extrémités
  while (debut < fin) {
    if (chaine[debut] != chaine[fin]) {
      Palindrome = 0; // Ce n'est pas un palindrome
      break; // Sortir de la boucle dès qu'une différence est trouvée
    }
    debut++;
    fin--;
  }

  // Afficher le résultat
  if (Palindrome) {
    printf("La chaîne est un palindrome.");
  } else {
    printf("La chaîne n'est pas un palindrome.");
  }

  return 0;
}