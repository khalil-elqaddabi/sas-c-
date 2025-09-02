#include <stdio.h>
int main(){
    float k,m,s;
    printf("Entrez un montant : ");
    scanf("%f",&k);
    m=(k/100)*5;
    s=k+m;
    printf("Avec taxe ajoutee : %.2f $",s);

    return 0;
}