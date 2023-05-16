#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l1,r1,l2,r2;
		int val;
		cin>>l1>>r1>>l2>>r2;
		if(l2<=r1){
			for (int i = l1; i <= r1; ++i)
			{
				for (int j = l2; j <= r2; ++j)
				{
					if(i==j){
						val = i;
						break;
					}
				}
			}
		}


		else{
			val = l1+l2;
		}

		cout<<val<<endl;
	}
}