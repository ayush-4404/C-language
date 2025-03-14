 #include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int matrix[ROWS][COLS];
    int newMatrix[ROWS][COLS];

    printf("Enter %d integers to populate a %d x %d matrix:\n", ROWS * COLS, ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nNew Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] >= 50) {
                newMatrix[i][j] = 50;
            } else {
                newMatrix[i][j] = matrix[i][j];
            }
            printf("%d ", newMatrix[i][j]);
        }
        printf("\n");
    }
    int subMatrix[3][4];
    printf("\nSubtraction Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            subMatrix[i][j] = newMatrix[i][j] - matrix[i][j];
            printf("%d ", subMatrix[i][j]);
        }
        printf("\n");

    }
    int transpose[COLS][ROWS];
    int transposeTwice[ROWS][COLS];

    
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposeTwice[i][j] = transpose[j][i];
        }
    }
 
    
    int equal = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] != transposeTwice[i][j]) {
                equal = 0;
                break;
            }
        }
    }
    
    printf("transpose matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    printf("transpose twice Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", transposeTwice[i][j]);
        }
        printf("\n");
    }


    return 0;
}
