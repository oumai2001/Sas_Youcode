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

    int min = tab[0];
    for(int i = 1; i < n; i++) {
        if(tab[i] < min) min = tab[i];
    }

    printf("Le minimum est: %d\n", min);
    return 0;
}
