#include <stdio.h>

int main() {
    int d1,m1,y1,d2,m2,y2;
    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(y2<y1)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d2,m2,y2,d1,m1,y1);
    else if(y1<y1)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d1,m1,y1,d2,m2,y2);
    else if(m2<m1)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d2,m2,y2,d1,m1,y1);
    else if(m1<m2)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d1,m1,y1,d2,m2,y2);
    else if(d2<d1)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d2,m2,y2,d1,m1,y1);
    else if(d1<d2)
    printf("%d/%d/%d est plus tot que %d/%d/%d",d1,m1,y1,d2,m2,y2);
    

    



    
    

    return 0;
}
