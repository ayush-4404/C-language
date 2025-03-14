#include <stdio.h>

// 1,4,5,6,7,8 - Ends
// 3 - Status Remains Same
// 2 - Initiates

void show(int *matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", *(matrix + j + size * i));
        printf("\n");
    }
}


int main()
{
    int matrix[3][3] = {
        {0, 1, 0},
        {0, 1, 0},
        {0, 1, 0}};
    int steps = 5, size = 3;

    printf("-----Initial-------\n");
    show((int *)matrix, 3);

    for(int t = 0; t < steps; t++) {
        int neighborCount[3][3];

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                int count = 0;
                for(int r = -1; r < 2; r++) {
                    for(int c = -1; c < 2; c++) {
                        int rIdx = i + r;
                        int cIdx = j+c;
                        if(rIdx < 0 || cIdx < 0 || rIdx >= size || cIdx >= size || (r == 0 && c==0)) continue;
                        if(matrix[rIdx][cIdx] == 1) count++;
                    }
                }

                neighborCount[i][j] = count;
            }
        }

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(neighborCount[i][j] == 3) continue;
                else if(neighborCount[i][j] == 2) matrix[i][j] = 1;
                else matrix[i][j]= 0;
            }
        }
    }

    printf("-----Final-------\n");
    show((int *)matrix, 3);

    return 0;
}
