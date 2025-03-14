#include <stdio.h>

// 1,4,5,6,7,8 - Dies
// 3 - Status Remains Same
// 2 - Becomes Alive

void display(int *m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", *(m + j + n * i));
        printf("\n");
    }
}


int main()
{
    int m[3][3] = {
        {0, 1, 0},
        {0, 1, 0},
        {0, 1, 0}};
    int k = 5, n = 3;

    printf("-----Initialy-------\n");
    display((int *)m, 3);

    for(int t = 0; t < k; t++) {
        int neighboursCount[3][3];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int count = 0;
                for(int r = -1; r < 2; r++) {
                    for(int c = -1; c < 2; c++) {
                        int rindex = i + r;
                        int cindex = j+c;
                        if(rindex < 0 || cindex < 0 || rindex >= n || cindex >= n || (r == 0 && c==0)) continue;
                        if(m[rindex][cindex] == 1) count++;
                    }
                }


                neighboursCount[i][j] = count;
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(neighboursCount[i][j] == 3) continue;
                else if(neighboursCount[i][j] == 2) m[i][j] = 1;
                else m[i][j]= 0;
            }
        }
    }

    printf("-----Finally-------\n");
    display((int *)m, 3);

    return 0;
}