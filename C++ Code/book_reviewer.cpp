#include <bits/stdc++.h>
using namespace std;
#define ll long long
// #define int l#define ll long longong long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		double arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int h;
		cin>>h;

		double ans=1;
		ll time =0;
		for (int i = 0; i < 1e10; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				time = time + ceil(arr[j]/ans);
				// cout<<time<<endl;
			}
			// cout<<endl;
			// time = time + ceil(arr[i]/ans);

			if(time<=h){
				// cout<<"hi"<<endl;
				break;
			}
			else{
				++ans;
				time=0;
			}
		}
		cout<<ans<<endl;
		// cout<<time<<endl;
	}
	return 0;
}