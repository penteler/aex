2112
```
#include <iostream>

using namespace std;

bool isEven(int x){
	return x % 2 == 0;
}

int main(){
	int a;
	cout << "enter number: "<< endl;
	cin >> a;
	cout << isEven(a);
	
	return 0;
}
```
2119
```
#include <iostream>
using namespace std;

int arr[] = {10, 4, 25, 7, 13};

int findLargest(){
	for(i = 0, i < 5, i++){
		if (arr[i] > 24){
			cout << arr[i]<< " is largest"<< endl;
		}
	}
}
int main(){
	findLargest();
	return 0;
}