#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) {
    int number = 0, len = strlen(str);
    for (int i = 0; i < len; i++) {
        int x = 1;
        for (int j = 0; j < (len - 1) - i; j++) {
            x = x * 2;
        }
        number = number + str[i] * x;
    }
    return number;
}
