#include <stdio.h>

int main() {
    int degit;
    int i;
    int count[10] = {0}; 
    int size = sizeof(count)/sizeof(count[0]);
    
    long n;

    printf("Entrer un nombre : ");
    scanf("%ld", &n);

    while (n > 0) {
        degit = n % 10;   
        count[degit]++;   
        n /= 10;       
    }

    printf("Chiffre(s) repete(s) : ");
    for ( i = 0; i < size; i++) {
        if (count[i] > 1) { 
            printf("%d ", i);
            
        }
    }

    return 0;
}