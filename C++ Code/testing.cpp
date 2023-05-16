#include<bits/stdc++.h>
#define int long long
using namespace std;
int b[100001];
void solve() {
int n,z;bool flag=false;
cin >> n;
for(int i=1;i<=n;++i)
cin >> b[i];
for(int i=2;i<=n;++i)
	if(b[i]>b[1]) {
	flag=true;
	z=i;
	break;
	}
	if(!flag) {
	puts("-1");
	return;
	}
	cout << z-1 << endl;
for(int i=1;i<z;++i)
cout << b[i] << ' ';
cout << endl << n-z+1 << endl;
for(int i=z;i<=n;++i)
cout << b[i] << ' ';
cout << endl;
}
signed main() {
srand(19260817);
int T;cin >> T;
while(T--) solve();
}