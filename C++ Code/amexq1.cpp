#include <bits/stdc++.h>
  using namespace std;

  int main() {

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]=='?'){
        if(s[i-1]=='b' and s[i+1]!='a'){
          s[i] = 'a';

        }
        else if(s[i]=='b' and s[i+2]!='a'){
          s[i] = 'a';
        }
        else if(s[i+1]=='b' and s[i-1]!='a'){
          s[i] = 'a';
        }
        else if(s[i+1]=='b' and s[i-1]!='a'){
          s[i] = 'a';
        }
        else if(s[i-1]!='a' and s[i+1]!='a'){
          s[i] = 'a'; 
        }

        else{
          s[i] = 'b';
        }
      }
    }
  cout<<s<<endl;
    return 0;

  }