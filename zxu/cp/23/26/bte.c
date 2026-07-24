#include <stdio.h>

int main(){
	int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
	int n = 8;
	int key = 25;
	int low = 0, high = n -1, mid;
	
	while (low <= high){
		
		mid = (low + high)/2;
		
		if (arr[mid] == key){
			printf("the number %d found at index %d (position %d)", key, mid, mid+1);
			return 0;
		}
		else if (arr[mid] < key){
			low = mid + 1;
		}
		else {
			high = mid -1;
		}
	}
	printf("element not found");
	return 0;
}