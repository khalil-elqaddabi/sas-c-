#include <stdio.h>

int main() {
   int n,k,j;
   printf("Entrez deux entiers (N1/N2) : ");
   scanf("%d/%d",&k,&j);
  n=1;
  for(int i=1;i<=k && i<=j;i++){
    if(k%i==0 && j%i==0){
n=i;
    }
    
  }
  k=k/n;
  j=j/n;
   
   
  
   printf("Le plus grand commun diviseur est : %d/%d",k,j);
    

    return 0;
}