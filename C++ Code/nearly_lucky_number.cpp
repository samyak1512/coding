#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	int a=0;
	int b=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='4'){
			a++;
			// cout<<s[i];
		}
		if(s[i]=='7'){
			b++;
		}
	}
	// cout<<a+b;

	if(a+b==4 || a+b==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}