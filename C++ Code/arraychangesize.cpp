#include <bits/stdc++.h>
using namespace std;

int main(){
	int *p = new int[5];
	int *q = new int[10];

	for (int i = 0; i < 5; ++i)
	{
		p[i] = i;
	}

	for (int i = 0; i < 10; ++i)
	{
		q[i] = p[i];
	}
	free(p);
	p = q;
	q = null;
	

}