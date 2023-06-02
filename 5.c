#include <stdio.h>

struct PC {
    char* name;
    int speed;
	int RAM;
};

struct PC* fastestPC(struct PC data[], int n) {
    int max_speed = data[0].speed, max_RAM = data[0].RAM;
    char* max_name = data[0].name;
    for (int i = 0; i < n; i++) {
        if (data[i].speed > max_speed) {
            max_speed = data[i].speed;
            * max_name = data[i].name;
            max_RAM = data[i].RAM;
        } else if (data[i].speed == max_speed) {
            if (data[i].RAM > max_RAM) {
                max_speed = data[i].speed;
                 * max_name = data[i].name;
                max_RAM = data[i].RAM;
            }
        }
    }
    return * max_name;
}
