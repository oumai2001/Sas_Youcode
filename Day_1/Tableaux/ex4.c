#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    int max = tab[0];
    for(int i = 1; i < n; i++) {
        if(tab[i] > max) max = tab[i];
    }

    printf("Le maximum est: %d\n", max);
    return 0;
}
