#include <stdio.h>

int main() {
    int degit;
    int i;
    int count[10] = {0}; 
    
    long n;

    printf("Entrer un nombre : ");
    scanf("%ld", &n);
    if(n<=0){
    return 0;
    }
    

    while (n > 0) {
        degit = n % 10;   
        count[degit]++;   
        n /= 10;       
    }

    printf("Chiffre(s) repete(s) : ");
    for ( i = 0; i < 10; i++) {
        if (count[i] > 1) { 
            printf("%d ", i);
            
        }
    }

    return 0;
}