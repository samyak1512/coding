#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int i;
	for (i = 0; i < 1e9+10; ++i)
	{
		a=a*3;
		b=b*2;
		if(a>b){
			break;
		}
	}
	cout<<i+1;
}