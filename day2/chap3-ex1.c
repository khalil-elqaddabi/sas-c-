#include <stdio.h>

int main() {
    int d1, d2, d3, d4, d5;

    printf("Entrez l'ISBN : ");
    scanf("%d-%d-%d-%d-%d", &d1, &d2, &d3, &d4, &d5);

    printf("Préfixe GS1 : %d\n", d1);
    printf("Identifiant de groupe : %d\n", d2);
    printf("Code de l'éditeur : %d\n", d3);
    printf("Numéro d'article : %d\n", d4);
    printf("Chiffre de contrôle : %d\n", d5);

    return 0;
}