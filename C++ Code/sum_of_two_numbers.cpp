#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,y;
		if(n%2==0){
			x = y = n/2;

		}
		else{
			x = n/2+1;
			y=n-x;
		}
		if(abs(sum_of_digits(x)-sum_of_digits(y))<=1){
			cout<<x<<" "<<y<<endl;
		}

		else{
			while (abs(sum_of_digits(x) - sum_of_digits(y)) > 1) {
            x--;
            y = n - x;
        }
        cout<<x<<" "<<y<<endl;

		}

	}
}