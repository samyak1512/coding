#include <bits/stdc++.h>

using namespace std;

int main(){
	int t = 1;
	while(t--){
		int arr[5][5];
		int m=0;
		int n=0;
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				cin>>arr[i][j];
				if(arr[i][j]==1){
					m=i+1;
					n=j+1;
				}

			}
		}

		int row = m-3;
		int col = n-3;
		if(row<0){
			row = row*-1;

		}
		if(col<0){
			col = col*-1;
		}

		cout<<row+col;
	}
}