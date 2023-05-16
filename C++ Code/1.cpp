#include <bits/stdc++.h>
using namespace std;


long long int linear_search(long long int arr[],long long int n, long long int key){
    for (long long int i = 0; i < n; ++i)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

long long int main(){
    long long int n,x;
    cin>>n>>x;
     long long int key=x;
    long long int arr[n];
    for (long long int i = 0; i < n; ++i)

    {
        /* code */
        cin>>arr[i];
    }

    sort(arr, arr + n);

    long long int index = linear_search(arr,n,key);

    if (index!=-1){
        cout<<index+1<<endl;

    }
    else{
        cout<<"Impossible"<<endl;
    }

}