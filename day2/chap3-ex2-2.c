#include <stdio.h>

int main() {
   int k,j,m;
   printf("Entrez une heure (h:n)-(24) : ");
   scanf("%d:%d",&k,&j);
   m=(k*60)+j;
   if(m>480 && m<616)
   printf("L'heure de départ la plus proche est (8:00) p.m., arrivant a (10:16)");
   else if(m>544 && m<712)
   printf("L'heure de départ la plus proche est (9:43) p.m., arrivant a (11:52)");
   else if(m>679 && m<811)
   printf("L'heure de départ la plus proche est (11:19) p.m., arrivant a (13:31)");
   else if(m>767 && m<900)
   printf("L'heure de départ la plus proche est (12:47) p.m., arrivant a (15:00)");
   else if(m>840 && m<986)
   printf("L'heure de départ la plus proche est (14:00) p.m., arrivant a (16:08)");
   else
   printf("Il n'y a pas de vols actuellement.");




    return 0;
}