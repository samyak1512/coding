#include <bits/stdc++.h>
using namespace std;

int hi(int arr[], int n)
{	
	int temp = arr[1];
	for (int i = 0; i < n; ++i)
	{
		temp = temp ^ arr[i];
	}

	return temp;
}
int main(){
	int t;
	cin>>t;
	while(t--
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<endl;
		// }
		int arr[n-1];

		for (int i = 0; i < n; ++i)
		{
			// int arr[n-1];
			// for (int j = 0; j < i-1; ++j)
			// {
			// 	arr[j]=a[j];
			// }
			// for (int k = i+1; k < n; ++k)
			// {
			// 	arr[k]=a[k];
			// }

			
    		for (int j=i; j<n-1; j++)
    		{
       			arr[j] = a[j];

       		}
       		for (int j = 0; j < i; ++i)
       		{
       			arr[j]=a[j];
       		}
			// for (int i = 0; i < n-1; ++i)
			// {
			// 	cout<<arr[i];
			// }
			// cout<<endl;
			// if(a[i]==hi(arr,n))
			// {
			// 	cout<<a[i]<<endl;
			// 	break;
			// }
		}

		for (int i = 0; i < n-1; ++i)
			{
				cout<<arr[i];
			}
			cout<<endl;
	}
}