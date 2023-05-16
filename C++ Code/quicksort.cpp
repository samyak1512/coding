#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }

        while(arr[j]>pivotIndex){   
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e)
        return;
    int p = partition(arr,s,e);
    // left wala
    quickSort(arr,s,p-1);
    // right wala
    quickSort(arr,p+1,e);
}
int main(){
    int arr[10] = {4,5,32,54,90,54,23,54,45,65};
    int n = 10;
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
}