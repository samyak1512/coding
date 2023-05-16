#include <bits/stdc++.h>
using namespace std;

int distinct(int* arr, int len)
{

	// declaring a set container using STL
	set<int> S;
	for (int i = 0; i < len; i++) {

		// inserting all elements of the
		// array into set
		S.insert(arr[i]);
	}
	// calculating the size of the set
	int ans = S.size();
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){

		int n,k;
		cin>>n>>k;
		int number = n/k;
		string s;
		// stringstream ss;
		cin>>s;
		
		for (int i = 0; i < n; ++i)
		{
			cout<<s[i];
		}
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			int x = s[i];
			arr[i] = x-96;
		}
		// stringstream ss;

		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i];
		}

		sort(arr, arr + n);
		cout<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i];
		}
		int dis = distinct(arr, n);
		int array[dis];
		int z=0;
		int zz =1;
		cout<<endl;
		// for (int j =0 ; j < dis; ++j)
		// {
		// 	for (int i = zz; i < n; ++i)
		// 	{
		// 		if(arr[i] == arr[z]){
		// 			z=z+1;
		// 			// cout<<arr[z]<<endl;
					
		// 		}
		// 		else{
		// 			array[j] = i+1;
		// 			z = z+1;
		// 			zz=i;

		// 			cout<<arr[i]<<" ";
		// 			break;
					
		// 		}
		// 	}
		// }
int i,j;
		for(i  = 0; i < n; i++) {
  for (j=0; j<i; j++){
      if (arr[i] == arr[j])
       break;
       }
      
     if (i == j){
      /* No duplicate element found between index 0 to i */
      printf("%d ", array[i]);
  }
 }
		cout<<endl;
		for (int i = 0; i < dis; ++i)
		{
			cout<<array[i]<<" ";
		}
	}
}