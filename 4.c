#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) {
    int s = 0, len = strlen(str);
    for (int i = 0; i < len; i++) {
        int x = 1;
        for (int j = 0; j < (len - 1) - i; j++) {
            x = x * 2;
        }
        s += str[i] * x;
    }
    return s;
}


int main() {
    char str[6] = {1, 1, 1, 1, 1, 1};
    printf("%d ", toDecimal(str));
    return 0;
}