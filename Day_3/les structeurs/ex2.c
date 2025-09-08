#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5]; 
};

int main() {
    struct Etudiant etu;

    
    strcpy(etu.nom, "Eddahani");
    strcpy(etu.prenom, "Oumaima");
    etu.notes[0] = 15;
    etu.notes[1] = 18;
    etu.notes[2] = 12;
    etu.notes[3] = 17;
    etu.notes[4] = 14;

    
    printf("Nom : %s\n", etu.nom);
    printf("Prenom : %s\n", etu.prenom);
    printf("Notes : ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", etu.notes[i]);
    }
    printf("\n");

    return 0;
}
