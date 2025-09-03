#include <stdio.h>

int main() {
    int l,k,j;
    printf("Entrez un nombre a deux chiffres : ");
    scanf("%d",&k);
    j=k/10;
    l=k%10;
    printf("%d%d",l,j);

    return 0;
}
