#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int b=0,c=0;
    for(int j=0; j<n; j++){
        if(arr[j]%2==0){
            b++;
        }
        else{
            c++;
        }
    }
    if(b<=c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    }
    return 0;
}