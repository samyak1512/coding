#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b;
		int sum=0;;
		a=0;
		b=0;
		// int arr[n];
		// while(sum<=n){
		// 	for (int i = 0; i < n; ++i)
		// 	{
		// 		arr[i]=i+1;
		// 	}

		// 	a=a+arr[0];
		// 	b=b+arr[1]+arr[2];

		// }
		a=1;
		b=5;
		int i = 4;
		if(n<10){
			a=0;
			b=0;
			if(a+b+i<=n){
				a=a+i;
				i++;
			}
			else{
				a=a+(n-a-b);
				break;
			}
			
			}
			if(a+b+i<=n){
				b=b+i;
				i++;
			}
			else{
				b=b+(n-a-b);
				break;
			}
			if(a+b+i<=n){
				b=b+i;
				i++;
			}
			else{
				b=b+(n-a-b);
				break;
			}
			// }
		}
		}
		else{
		while(a+b<=n){
			// if(i<2){
			// 	a=a+i;
			// 	i++;
				
			// 	b=b+i;
			// 	i++;
			// 	b=b+i;
			// 	i++;

			// }
			// else{
			if(a+b+i<=n){
				a=a+i;
				i++;
			}
			else{
				a=a+(n-a-b);
				break;
			}
			if(a+b+i<=n){
				a=a+i;
				i++;
			}
			else{
				a=a+(n-a-b);
				break;
			}
			if(a+b+i<=n){
				b=b+i;
				i++;
			}
			else{
				b=b+(n-a-b);
				break;
			}
			if(a+b+i<=n){
				b=b+i;
				i++;
			}
			else{
				b=b+(n-a-b);
				break;
			}
			// }
		}

		cout<<a<<" "<<b<<" "<<a+b<<endl;
	}
}