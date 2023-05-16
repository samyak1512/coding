#include <bits/stdc++.h>
using namespace std;

int main(){

	int w=50;
	int arr[3][2] = {
		{60,10},
		{100,20},
		{120,30}
	};

	int n = 3;
	int ratio[3];
	for (int i = 0; i < n; ++i)
	{
		ratio[i] = arr[i][0]/arr[i][1];
	}
cout<<"h";
	std::sort(ratio,ratio+3);
	cout<<"h";
	int ans[3];

	int weight = 0;
	for (int i = 0; i < n; ++i)
	{
		cout<<"hello";
		if(weight<=w){
			ans[i]=1;
			weight = weight + arr[i][0];
			cout<<"hello";
		}

		if(weight>w){
			ans[i] = (w-weight)/arr[i][0];
			weight=w;
			break;
			cout<<"hello";
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}
}