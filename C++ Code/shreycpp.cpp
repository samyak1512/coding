#include <iostream>
using namespace std;
// Selection sort in C++


// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}


int main(){
    int n;
    cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     cin>>arr[n];
    // }
    int arr[] = {23,49,38,60,52};
    // int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr,n);
    int m;
    cin>>m;
    int i = 0;
    int num;
    for (i = 0; i < n; ++i)
    {
       if(arr[i] > m){
        num = arr[i];
        break;

       } 
    }
    int number = m-1;
    for (int j = i-1;j>0; j--)
    {
        int number = m-1;
        // cout<<j<<endl;
        if(number!=arr[j]){
            // cout<<arr[j]<<endl;
            // cout<<number<<endl;
        }
        else{
            --number;
        }
        cout<<number<<endl;
        break;
    }
    // cout<<number;
    // cout<<number<<endl;
}