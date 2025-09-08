#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point pt;
    struct Point *p = &pt; 

    p->x = 10;
    p->y = 20;


    printf("Point : (%d, %d)\n", p->x, p->y);

    return 0;
}
