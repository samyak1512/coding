#include <bits/stdc++.h>

using namespace std;
int main(){
	int y;
	cin>>y;
	for (int i = y+1; i < 1e+5; ++i)
	{
		string s = to_string(i);
		set<int> uniDigits(s.begin(), s.end());
		if(s.size() == uniDigits.size()){
			cout<<s;
			break;
		}		
	}
}