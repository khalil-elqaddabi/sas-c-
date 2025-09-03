#include <stdio.h>

int main() {
    
int k,j;
printf("Note littérale : ");
scanf("%d",&k);
if(k<0 || k>100){
    printf("error");
if(k==100)
printf("Note littérale : A");
printf("error");
return 0;
}

if(k==100){
printf("Note littérale : A");
return 0;
}


j=k/10;
switch(j){
    case 9 :
    printf("Note littérale : A ");
    break;
    case 8 :
    printf("Note littérale : B ");
    break;
    case 7 :
    printf("Note littérale : B ");
    break ;
    case 6 :
    printf("Note littérale : D ");
    default :
    printf("Note littérale : F ");
    break;


}

    return 0;
}
