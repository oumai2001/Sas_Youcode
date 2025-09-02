#include <stdio.h>

int main() {
	int n, ancien, nouveau;

	printf("Entrez le nombre elements: ");
	scanf("%d", &n);

	int tab[n];
	for(int i = 0; i < n; i++) {
		printf("Entrez element %d: ", i+1);
		scanf("%d", &tab[i]);
	}

	printf("Entrez la valeur a remplacer: ");
	scanf("%d", &ancien);
	printf("Entrez la nouvelle valeur: ");
	scanf("%d", &nouveau);

	for(int i = 0; i < n; i++) {
		if(tab[i] == ancien)
			tab[i] = nouveau;
	}

	printf("Tableau apres remplacement:\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", tab[i]);

	return 0;
}
