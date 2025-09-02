#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &tab[i]);
        somme += tab[i]; 
    }

    printf("La somme des elements est: %d\n", somme);
    return 0;
}
