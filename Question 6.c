#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        
        printf("   |   ");
        
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("   |   ");
       
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        
        printf("\n");
    }
    
    return 0;
}
