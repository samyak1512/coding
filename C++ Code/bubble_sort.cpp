#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
for (int times = 1; times <= n-1; times++)
{
	for (int i = 0; i <= n-times-1; ++i)
	{
		/* code */
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
}
}

int main(){
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);

	for(auto x:arr){
		cout <<x<<",";
	}
	return 0;

}