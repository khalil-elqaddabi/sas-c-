#include <stdio.h>

int main() {
  int i,k,n;
  printf("entre un nombre  :");
  scanf("%d",&k);
 
  for(i=1;i*i<=k;i++){
  n=i*i;
  if(n%2==0)
  printf("%d\n",n);
  }
    return 0;
}