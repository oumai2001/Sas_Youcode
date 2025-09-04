#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n], copie[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &tab[i]);
        copie[i] = tab[i]; 
    }

    printf("Tableau original:\n");
    for(int i = 0; i < n; i++)
	 printf("%d\n", tab[i]);

    printf("Tableau copie:\n");
    for(int i = 0; i < n; i++) 
	   printf("%d\n", copie[i]);

    return 0;
}
