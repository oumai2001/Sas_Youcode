#include <stdio.h>

int main() {
    int n;
    printf("Entrez le nombre elements: ");
    scanf("%d", &n);

    int tab[n];
    for(int i = 0; i < n; i++) {
        printf("Entrez element %d: ", i+1);
        scanf("%d", &tab[i]);
    }

    printf("Elements pairs:\n");
    for(int i = 0; i < n; i++) {
        if(tab[i] % 2 == 0) 
		printf("%d\n", tab[i]);
    }

    return 0;
}
