#include <stdio.h>

int main() {
    int n , fact = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %ld\n", n, fact);
    return 0;
}
