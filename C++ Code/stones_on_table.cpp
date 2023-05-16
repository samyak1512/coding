#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int r=0;
	int b=0;
	int g=0;
	int r1=0;
	int b1=0;
	int g1=0;

	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='R')
		{
			r1++;
			for (int j = i; j < n; ++j)
			{
				if(s[j]=='R'){
					r++;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='B')
		{
			b1++;
			for (int j = i; j < n; ++j)
			{
				if(s[j]=='B'){
					b++;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='G')
		{
			g1++;
			for (int j = i; j < n; ++j)
			{
				if(s[j]=='G'){
					g++;
				}
			}
		}
	}

	cout<<r-r1+b-b1+g-g1;
}