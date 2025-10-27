#include <stdio.h>

int main() {
   
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4]; 
    int i, j;
    int count = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            inverted[i][j] = 1 - image[i][j];
            if (image[i][j] == 1) {
                count++;
            }
        }
    }

    
    printf("Original Image\tInverted Image\n");

    for (i = 0; i < 4; i++) {
        
        for (j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }

        printf("\t"); 

        
        for (j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }

        printf("\n");
    }

    
    printf("\nTotal white pixels in original image: %d\n", count);

    return 0;
}
