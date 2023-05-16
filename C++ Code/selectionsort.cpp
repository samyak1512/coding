#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
	for (int pos = 0; pos < n; ++pos)
	{
		/* code */
		int current = arr[pos];
		int min_position = pos;
		for (int i = pos; i < n; ++i)
		{
			/* code */
			if(arr[i]<arr[min_position]){
				min_position = i;
			}
		}

		swap(arr[min_position],arr[pos]);
	}
	
}

int main(){
	int arr[]={8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	selection_sort(arr,n);

	for( auto x:arr){
		cout<<x<<",";
	}
}