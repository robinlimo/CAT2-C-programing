
#include <stdio.h>

int main() {
    // Declare and initialize a 2D array named 'scores'
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    // Print the elements of the array using a nested for loop
    printf("The elements of the array are:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
