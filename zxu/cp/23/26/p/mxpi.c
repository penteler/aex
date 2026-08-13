#include <stdio.h>

int main() {

    int A[2][2];
    int B[2][2];
    int C[2][2];

    int i, j, k;

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* Matrix multiplication */

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {

            C[i][j] = 0;

            for (k = 0; k < 2; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");

    for (i = 0; i < 2; i++) {

        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}