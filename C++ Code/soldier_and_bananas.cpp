#include <bits/stdc++.h>

using namespace std;
int main(){
	int k,n,w;
	cin>>k>>n>>w;
	int i;
	int cost = k*w*(w+1)/2;
	int bor = cost-n;
	cout<<bor;
}