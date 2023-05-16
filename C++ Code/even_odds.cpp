#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void get_natural_numbers(int n, int* numbers) {
  // store odd numbers
  for (int i = 1, j = 0; i <= n; i += 2, j++) {
    numbers[j] = i;
  }
  // store even numbers
  for (int i = 2, j = (n/2); i <= n; i += 2, j++) {
    numbers[j] = i;
  }
}

int main() {
  int n;
  int k;
  cin>>n;
  cin>>k;
  
  int* numbers = new int[n];
  
  get_natural_numbers(n, numbers);
  for (int i = 0; i < n; ++i)
  {
  	cout<<numbers[i]<<endl;
  }
  if(n%2==0){
  	cout<<numbers[k-1];
  }
  else{
  	cout<<numbers[k-2];
  }
}