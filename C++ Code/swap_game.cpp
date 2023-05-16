#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int min;
        int index = 0;
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
            if(arr[i]<min){
                min=arr[i];
                index=i;
            }
        }

       if(index!=0){
        cout<<"Bob"<<endl;
       }
       else{
        cout<<"alice"<<endl;
       }
    }
}