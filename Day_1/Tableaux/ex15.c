#include <stdio.h>

int main() {
    int n1, n2, i, j;


    printf("Entrez le nombre d'elements du premier tableau : ");
    scanf("%d", &n1);
    printf("Entrez le nombre d'elements du deuxieme tableau : ");
    scanf("%d", &n2);

    int tab1[n1], tab2[n2], fusion[n1 + n2];


    printf("Entrez les elements du premier tableau :\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }


    printf("Entrez les elements du deuxieme tableau :\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

       for (i = 0; i < n1; i++) {
        fusion[i] = tab1[i];
    }
    for (j = 0; j < n2; j++) {
        fusion[n1 + j] = tab2[j];
    }

    
    printf("Tableau fusionne :\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }
    printf("\n");

    return 0;
}
