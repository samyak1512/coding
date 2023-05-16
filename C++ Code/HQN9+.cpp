#include <bits/stdc++.h>
using namespace std;

int main(){
	 string s;
	 cin>>s;
	 int flag=0;
	 // cout<<"hello";
	 for (int i = 0; i < s.size(); ++i)
	 {
	 	if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+'){
	 		cout<<"YES";
	 		flag=1;
	 		break;
	 	}
	 }
	 if(flag==0){
	 	cout<<"NO";
	 }
}