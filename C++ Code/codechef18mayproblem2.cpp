#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		int y;
		cin>>x>>y;
		 int a = 500-2*x+1000-4*(x+y);
		 int b = 500-2*(x+y)+1000-4*y;
		 cout << std::max(a, b) << "\n";

	}
}