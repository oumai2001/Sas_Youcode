#include <stdio.h>

long factorielle(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    printf("La factorielle de %d est : %ld\n", n, factorielle(n));
    return 0;
}
