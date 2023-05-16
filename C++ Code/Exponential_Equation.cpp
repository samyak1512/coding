#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%2==0){
      cout<<1<<" "<<n/2<<endl;
    }

    else{
      cout<<-1<<endl;
    }
  }
}