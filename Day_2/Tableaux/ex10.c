#include <stdio.h>

int main() {
    int n, recherche, trouve = 0;
    
    printf("Entrez le nombre elements: ");
    scanf("%d", &n);

    int tab[n];
    
    for(int i = 0; i < n; i++) {
        printf("Entrez element %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Entrez element a rechercher: ");
    scanf("%d", &recherche);

    for(int i = 0; i < n; i++) {
        if(tableau[i] == recherche) {
            trouve = 1;
            break;
        }
    }

    if(trouve)
    
	 printf("Element present dans le tableau.\n");
	 
    else printf("Element non present.\n");

    return 0;
}
