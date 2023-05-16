#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		double arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
 
		sort(arr, arr + n);
 
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<arr[i];
		// }
		// cout<<endl;
		int counter = 0;
		double ans1;
		double ans2;
		if(arr[0]==1){
			counter = accumulate(arr, arr+n,0) - n;
 
 
		}
		else{
			counter = 0;
			for (int i = 0; i < n; ++i)
			{	
				if(arr[i]>=2*arr[0]){
					ans1 = ceil((log(arr[i]/arr[0])/log(2))-1);
				// 	cout<<ans1<<"      ";
				// 	cout<<log(arr[i]/arr[0])/log(2)<<"                    ";
					// ans2 = 2**(ans1-1);
				// 	cout<<endl;
					ans2 = pow(2,ans1);
				// 	cout<<ans2<<"     ";
					counter = counter + ans2;
				}
			}
		}
		cout<<counter<<endl;
	}
}