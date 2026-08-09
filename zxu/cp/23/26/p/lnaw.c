#include <stdio.h>

int main(){
	int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
	int n = 1;
	int largest = arr[0];
	int size = sizeof(arr)/sizeof(arr[0]);
	
	
	while (n < size){
		
		
		
		if (arr[n] > largest){
			largest = arr[n];
		}
	
	n = n + 1;	
	}
	printf(" %d is the largest element \n", largest);
	return 0;
}