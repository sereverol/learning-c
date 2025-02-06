#include <stdio.h>

int main (void) {

    int height = 8;
    
    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}

