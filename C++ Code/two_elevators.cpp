#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int diff1 = a-1;
		int diff2 = (c-b)+(c-1);
		if((c-b)<0){
			diff2 = b-1;
		}
		else if((c-b>0)){
			diff2 = 2*c-b-1;
		}
		// else if(diff2<0){
		// 	diff2 = diff2*(-1);
		// }

		 else if(diff1>diff2){
			cout<<2<<endl;
		}
		else if(diff2>diff1){
			cout<<1<<endl;
		}
		else if (diff1==diff2){
			cout<<3<<endl;
		}
		// cout<<diff2<<diff1;
	}
}