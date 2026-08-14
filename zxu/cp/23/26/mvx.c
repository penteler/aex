
#include <stdio.h>


int main() {
	int A[2][2], B[2][2], C[2][2];
	int i, j, k;
	
	printf("input first matrix:\n");
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("input second matrix:\n");
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &B[i][j]);
		}
	}
	for (i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			C[i][j] = 0;
			for(k = 0; k < 2; k++){
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	printf("product of the matrices:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
