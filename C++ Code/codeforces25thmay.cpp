#include <bits/stdc++.h>
using namespace std;

// float sum(float arr[],int n, int i){
// 	float s = 0;
// 	for (int j = 0;j < n; ++j)
// 	{
// 		s = s + arr[j];

// 	}
// 	s = s - arr[i];
// 	float avg = s/(n-1);
// 	return avg;
// }

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		


		int ans = 0;
		for (int i = 0; i < n; ++i)
		{	
				float s = 0;
			for (int j = 0;j < n; ++j)
			{
				s = s + arr[j];

			}


			s = s - arr[i];


			float avg = s/(n-1);
				
				if((float)arr[i]==avg){
					int ans = 1;
					break;
					
				}

				else{
					int ans = 0;
				}
				
		}

		if(ans == 0){
			cout<<"No"<<endl;

		}
		else{
			cout<<"Yes"<<endl;
		}



	}
}