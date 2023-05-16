#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int n) 
{
    int initial_sum  = 0; 
    return accumulate(arr, arr+n, initial_sum);
}

bool arraynonzero(int arr[], int n,int z, int count)
{
  
  for (int i = z; i < n; i++)
  {
      if(arr[i] = 0)
      {
        count++;
      }

  }

  if(count==0)
  {
  	return true;
  }
  else 
  {	
  	return false;
  }
  
}

int main()
{
	int t;
	int z = 0;
	int count == 0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		if(n==1)
		{
			if(arr[0]==0)
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<1<<endl;
			}
		}

		else if(arraySum(arr,n)==0)
		{
			cout<<0<<endl;
		}

		else if(arraynonzero(arr,n,0,count)==true)
		{
			cout<<1<<endl;
		}
		else if ((arr[0]==0 || arr[n]==0) && arraynonzero(arr,n,2,count)==true)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<"bye"<<endl;
		}

	}
}