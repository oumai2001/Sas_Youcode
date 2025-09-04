#include <stdio.h>

void InverseChaine(char ch[]) {
    int cpt = 0, i, j;

    while (ch[cpt] != '\0') {
        cpt++;
    }

    char sh;
    for (i = 0, j = cpt - 1; i < j; i++, j--) {
        sh = ch[i];
        ch[i] = ch[j];
        ch[j] = sh;
    }
}

int main() {
    char mot[100];
    printf("Entrez une chaine : ");
    scanf("%[^\n]", mot);  

    InverseChaine(mot);
    printf("Chaine inversee : %s\n", mot);

    return 0;
}
