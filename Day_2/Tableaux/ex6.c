#include <stdio.h>

int main() {
    int n, fact;
    printf("Entrez le nombre d elements: ");
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l element %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez le facteur de multiplication: ");
    scanf("%d", &fact);

    printf("Tableau apres multiplication:\n");
    for(int i = 0; i < n; i++) {
        tab[i] *= fact;
        printf("%d\n", tab[i]);
    }

    return 0;
}
