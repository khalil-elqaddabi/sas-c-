#include <stdio.h>

int main() {
   int n,k,j,count=0;
   printf("Entrez deux entiers (N1/N2) : ");
   scanf("%d/%d",&k,&k);
   while(k%2==0 && k%2 ==0){
    k=k/2;
    j=j/2;
    count++;
   }
   n=count*2;
  
   printf("Le plus grand commun diviseur est : %d",n);
    

    return 0;
}