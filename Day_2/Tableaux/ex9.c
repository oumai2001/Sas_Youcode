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

    for(int i = 0; i < n/2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = tmp;
    }

    printf("Tableau inverse:\n");
    for(int i = 0; i < n; i++) 
	printf("%d\n", tab[i]);

    return 0;
}
