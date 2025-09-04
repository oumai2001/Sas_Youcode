#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez le nombre d elements: ");
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l element %d: ", i+1);
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    float moyenne = (float)somme / n;
    printf("La moyenne est: %.2f\n", moyenne);

    return 0;
}
