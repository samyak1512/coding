#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		string b = " ";
		int num = 0;
		for (int i = n; i > 0 ;)
		{
			if(s[i]==0){
				num = int(s[i-2]-48)*10+int(s[i-1]-48);
				i=i-3;
			}

			else{
				num = int(s[i]-48);
			}

			b = b + char(num+96);
		}
		reverse(s.begin(), s.end());
		cout<<s;
	}
}