#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int j = 0; j < n; ++j)
		{
			cin>>b[j];
		}


		if(n>1){
			for (int i = 0; i < n; ++i)
			{
				if(b[0]!=0){
					if((a[i]-b[i])!=(a[0]-b[0])  && b[i]!=0){
						// cout<<"NO"<<endl;
						break;
					}

					else if((a[i]-b[i])==(a[0]-b[0]) && b[i]!=0){
						count ++;

					}

					else if(b[i]==0 && (a[i]<=(a[0]-b[0]))){
						count++;
					}

					
					if(count == n){
						cout<<"Yes"<<endl;
					}
					else{
						cout<<"No"<<endl;
			
					}
				}


				
			}	
		}		
		
		else if(a[0]>=b[0]){
			cout<<"Yes"<<endl;

		}

		else{
			cout<<"No"<<endl;
		}
	}

}
/