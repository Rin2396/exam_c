#include <stdio.h>

int main () {
    int n, m, k = 0;
    scanf ("%d", &m);
    while (m != 0) {
        n = m;
        scanf ("%d", &m);
        if (m - n == 3) {
            k++;
        }        
    }
    printf ("%d", k);
    return 0;
}