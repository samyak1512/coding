#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		string s;
 		cin>>s;
 		string r = "314159265358979323846264338327";
 		int count =0 ;
 		for (int i = 0; i < 30; ++i)
 		{
 			if(r[i]==s[i]){
 				count++;
 			}
 			else{
 				break;
 			}
 		}

 		cout<<count<<endl;
 	}
 }