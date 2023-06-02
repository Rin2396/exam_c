#include <stdio.h>

float sumFoo (int n) {
    float sum = 0, k = 1;
    for (int i = 1; i <= n; i++) {
        k = k / (i * i);
        sum += k;
    }
    return sum;
}

int main () {
    int n;
    scanf ("%d", &n);
    printf ("%f", sumFoo(n));
    return 0;
}
