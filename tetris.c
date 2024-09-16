#include <stdio.h>

void render();

int main() {
    render();
    return 0;
}

void render () {
    int rows = 30;
    int columns = 60;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1 || i == 5) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}