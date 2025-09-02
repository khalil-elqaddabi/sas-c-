#include <stdio.h>


int main(){

    float p=3.14,v,r;
    printf("d'entrer le rayon de la sphere : ");
    scanf("%f",&r);
    v = (4.0f/3.0f)*p*(r*r*r);
    printf("le voluma de sphere est : %.2f",v);
return 0;
}