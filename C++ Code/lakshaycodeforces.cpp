#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct values
{
	int a;
	int b;
	int c;
	int d;
};

values countFreq(int arr[], int n)
{
	values val;
	int count = 0;
	int maxVal=0;
	int maxCount = 0;

	for(int i=0;i<n;i++) 
	{
        count = 0;
        for(int j=i;j<n;j++) 
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxVal = arr[i];
        }
    }
    

    int pred = maxVal -1;
    int succ = maxVal +1;
    int fpred = 0;
    int fsucc = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(arr[i]==pred)
    	{
    		fpred++;
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	if(arr[i]==fsucc)
    	{
    		fsucc++;
    	}
    }
     

    val.a = maxVal;
    val.b= maxCount;
    val.c = fpred;
    val.d = fsucc;


    return val;
}

 int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	values v = countFreq(arr,n);
	// cout << v.a << endl;
	// cout << v.b << endl;
	// cout << v.c << endl;
	// cout << v.d << endl;

	if(k>fpred && k>maxCount){
		cout<<maxCount+max(fpred,fsucc);
	}
	else if (fpred<k<fsucc){
		3
	}
	return 0;
}