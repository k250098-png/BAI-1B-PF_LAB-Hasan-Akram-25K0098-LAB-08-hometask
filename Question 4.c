#include <stdio.h>

int main() {
    
    int seats[3][3] = {
        {1, 0, 1},  // Row 1
        {0, 0, 1},  // Row 2
        {1, 1, 0}   // Row 3
    };

    int i, j;
    int count = 0;

    printf("Available seats:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (seats[i][j] == 0) {
                count++;
              
                printf("  Row %d, Seat %d\n", i + 1, j + 1);
            }
        }
    }

    printf("\nTotal number of available seats: %d\n", count);

    return 0;
}
