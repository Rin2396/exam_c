#include <stdio.h>

struct Coord {
	int x;
	int y; 
};

int canGet(struct Coord start, struct Coord finish) {
    int x_move = abs (start.x - finish.x);
    int y_move = abs (start.y - finish.y);
    if (x_move == y_move) {
        return 1;
    }
    return 0;
}

int main () {
    struct Coord start, finish;
    scanf ("%d %d", &start.x, &start.y);
    scanf ("%d %d", &finish.x, &finish.y);
    printf ("%d", canGet(start, finish));
    return 0;
}