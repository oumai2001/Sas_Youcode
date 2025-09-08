#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};

// Fonction qui calcule l'aire
float calculAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect;
    rect.longueur = 5;
    rect.largeur = 3;

    printf("Aire du rectangle : %.2f\n", calculAire(rect));

    return 0;
}
