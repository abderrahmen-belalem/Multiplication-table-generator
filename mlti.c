#include <stdio.h>

int main() {
    int x, y;
    int z = 10;
    int a;
    printf ("enter the value: ");
    scanf ("%d", &a);
    for (x = 1; x <= a; x++) {
        for (y = 0; y <= z; y++) {
        printf ("%d x %d = %d\n", x, y, x*y);
        }
        printf("\n");
    }
    return 0;
}