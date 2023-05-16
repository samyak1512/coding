#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		int x1,x2,temp;
		
		for (int i = 0; i < n; ++i)
		 {	
		 	// if(i!=0 && i!=n-1)
		// 	{
		// 		x1 = a[i-1];
		// 	    x2 = a[i+1];
			    
		// 	}

			if(i==0)
			{
				x1 = 0;
				x2 = a[i+1];
			}

			else if(i==n-1 )
			{
				x2 = 0;
				x1 = a[i-1];
			}

			else if(i!=0 && i!=n-1)
			{
				x1 = a[i-1];
			    x2 = a[i+1];
			    
			}
			// cout<<x1<<endl;
			// cout<<x2<<endl;
			if(x1!=a[0]){
			for (int j = 0; j < i; ++j)
			{
				x1 = x1 ^ a[j];
			}
		}
			if(x2!=a[n-1]){
			for (int k = i+1; k < n; ++k)
			{
				x2 = x2 ^ a[k];
			}
		}

			temp = x1^x2;
			// cout<<i<<" "<<x1<<" "<<x2<<" "<<temp<<endl;


			if(a[i]==temp)
			{
				cout<<temp<<endl;
				break;
			}

			
		}

	}	

}

(n*(n-1)*(n-2))/(6)