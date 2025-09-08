#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[50];
    char auteur[50];
    int annee;
};

struct Livre creerLivre() {
    struct Livre l;
    strcpy(l.titre,"Oumaima" );
    strcpy(l.auteur, "Eddahani");
    l.annee = 2025;
    return l;
}

int main() {
    struct Livre livre1 = creerLivre();

    printf("Titre : %s\n", livre1.titre);
    printf("Auteur : %s\n", livre1.auteur);
    printf("Annee : %d\n", livre1.annee);

    return 0;
}
