#include <stdio.h>

#define N 4  


void printMatrix(int matrix[N][N]) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}


void rotateMatrix(int matrix[N][N]) {
    
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N/2;j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N-1-j];
            matrix[i][N-1-j] = temp;
        }
    }
}

int main() {
    int matrix[N][N] = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotateMatrix(matrix);

    printf("Rotated Matrix by 90 degrees clockwise:\n");
    printMatrix(matrix);

    return 0;
}

