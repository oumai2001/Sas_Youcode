#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Entrez la premiere chaine : ");
    scanf(" %[^\n]", str1);

    printf("Entrez la deuxieme chaine : ");
    scanf(" %[^\n]", str2);

    if (strcmp(str1, str2) == 0)
        printf("Les chaines sont egales.\n");
    else
        printf("Les chaines sont differentes.\n");

    return 0;
}
