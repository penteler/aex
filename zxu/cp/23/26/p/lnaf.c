#include <stdio.h>

int main(){
	int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
	int n;
	int largest = arr[0];
	int size = sizeof(arr)/sizeof(arr[0]);
	
	
	for (n = 1 ; n < size; n++){
		
		
		
		if (arr[n] > largest){
			largest = arr[n];
		}
	
	
	}
	printf(" %d is the largest element \n", largest);
	return 0;
}