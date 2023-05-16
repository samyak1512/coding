#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int cnt=0;
	// cout<<0<<" "<<s[0]<<" "<<s[0+1]<<endl;
	for (int i = 0; i < s.size(); ++i)
	{	
		if(s[i]==s[i+1]){
			cnt++;
			// cout<<i<<" "<<s[i]<<" "<<s[i+1]<<endl;
		}

		else if(cnt>=6){
			cout<<"YES";
			break;
		}
		else{
			cnt = 0;
		}
		// cout<<cnt<<endl;
	}

	if(cnt<6){
		cout<<"NO";
	}
}