#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define int long long
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}
signed main(){
	


 int a = 10;
 square(&a);
 cout << a << endl;
}
