// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int arr[100];   int n,t;  int count=0;
int arr2[100];

int sum(int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr2[i];
    }
    if(sum<t){
        return 1;
    }
    else if(sum==t)
        return 2;
    else
        return 0;
}
void fn(int k,int p){
    arr2[p]=arr[k];
    if(sum(p+1)==1){
        for(int i=k+1;i<n;i++){
            fn(i,p+1);
        }
    }
    else if(sum(p+1)==2){
        for(int i=0;i<p+1;i++){
            cout<<arr2[i]<<'\t';
        }
        return ;
    }
    else
        return ;
}
int main(){
    cin>>n;
    // int * arr = (int *)mallac(sizeof(int)*n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter t: ";
    cin>>t;

    for(int i=0;i<n;i++){
        fn(i,0);
    }


}