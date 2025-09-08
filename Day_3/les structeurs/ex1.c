#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne p1;


    strcpy(p1.nom, "Eddahani");
    strcpy(p1.prenom, "Oumaima");
    p1.age = 22;

    printf("Nom : %s\n", p1.nom);
    printf("Prenom : %s\n", p1.prenom);
    printf("Age : %d\n", p1.age);

    return 0;
}
