#include <iostream>
using namespace std;

void printArray(int arr[],int n){

	
	for (int i = 0; i < n; ++i)
	{
		/* code */

		cout <<arr[i]<<endl;
	}
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i]<<endl;
	}
	printArray(arr,n);
}