#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
    
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<"1 3"<<endl;
            cout<<"4 2"<<endl;
            
            
        }

        else{
             int i;
            int x;
            int y;
            int j;
            vector <int> a(n*n);
            for(i=0;i<n*n;i++)
            {
                a[i]=(i+1);
            }
            x=0,y=n*n-1;
            int flag=1;
            vector <vector<int>> samyak;
            for(i=0;i<n;i++)
            {
                vector <int> shaur;
                for(j=0;j<n;j++)
                {
                    if(flag==1)
                    {
                        shaur.push_back(a[x++]);
                        flag=0;
                    }
                    else
                    {
                        shaur.push_back(a[y--]);
                        flag=1;
                    }
                }
                samyak.push_back(shaur);
            }
            if(n%2==0)
            {
                for(i=1;i<n;i=i+2)
                {
                    reverse(samyak[i].begin(),samyak[i].end());
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<samyak[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }


}

