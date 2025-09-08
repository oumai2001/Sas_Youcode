#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Entrez la premiere chaine : ");
    scanf(" %[^\n]", str1);

    printf("Entrez la deuxieme chaine : ");
    scanf(" %[^\n]", str2);

    
    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 

    printf("Chaine concatenee : %s\n", str1);

    return 0;
}

