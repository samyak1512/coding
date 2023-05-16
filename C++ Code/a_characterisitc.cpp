#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      int k;
      cin>>n>>k;
      int flag=0;
      int x;
      for (int i = 1; i < n+2; ++i)
      {
         int ans = (i*(i-1)/2)+((n-i)*(n-i-1)/2);
         if(k==ans){
            x=i;
            flag=1;
            break;
         }
      }

      if (flag==1){
         cout<<"yes"<<endl;
         for (int i = 0; i < x; ++i)
         {
            cout<<1<<" ";
         }
         for (int i = x; i < n; ++i)
         {
            cout<<-1<<" ";
         }
         cout<<endl;
      }
      else{
         cout<<"no"<<endl;
      }
   }
}
