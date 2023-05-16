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
    int a=0;
    // cout<<s[1];
    
    int r1=0;
    int r=0;
    int l=0;
    int l1=s.size()-1;
    for (r1 = 0; r1 < s.size(); ++r1)
    {
      if(s[r1]=='R'){
        r=1;
        break;
      }
    }
    for ( l1 = s.size()-1; l1 >= 0; --l1)
    {
      if(s[l1]=='L'){
        l=1;
        break;
      }
    }

    for (int i = 0; i < s.size(); ++i)
    {
      if(s[i]=='R' && l!=0 && l1>r1){
        // cout<<i<<endl;
        a=1;
            
            
          }
        }
      

    int b=0;
    int z=0;
    for (z = 0; z < s.size(); ++z)
    {
      if(s[z]=='L' && s[z+1]=='R'){
        b=1;
        break;
      }
    }

    if(a==1){
      cout<<0<<endl;
    }
    else if(b==1){
      cout<<z+1<<endl;
    }
    else if(r==0 || l==0){
      cout<<-1<<endl;
    }
  }
}