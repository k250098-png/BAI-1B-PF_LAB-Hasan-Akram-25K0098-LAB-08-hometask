#include <stdio.h>

int main() {
    
    int scores[3][4] = {
        {85, 92, 78, 90},  // Class 1
        {88, 76, 95, 84},  // Clas 2
        {90, 85, 88, 92}   // Class 3
    };

    int i, j;
    float average;

    for (i = 0; i < 3; i++) {
        int sum = 0;
        for (j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        average = sum / 4.0;
        printf("Average score for Class %d = %.2f\n", i + 1, average);
    }

    return 0;
}
