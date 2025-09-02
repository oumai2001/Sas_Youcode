#include <stdio.h>

int main() {
    int b, exp, res = 1;
    printf("Entrez la base : ");
    scanf("%d", &b);
    printf("Entrez l'exposant : ");
    scanf("%d", &exp);


    for (int i = 1; i <= exp; i++) {
        res *= b;
    }

    printf("%d^%d = %d\n", b, exp, res);
    return 0;
}
