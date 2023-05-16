#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		string b;
		cin>>a>>b;
		int counterax=0;
		int counterbx=0;
		int am=0;
		int bm=0;
		int as=0;
		int bs=0;
		int al=0;
		int bl=0;

		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i]=='X'){
				counterax++;
			}
			if(a[i]=='S'){
				as++;
			}if(a[i]=='M'){
				am++;
			}if(a[i]=='L'){
				al++;
			}
		}
		for (int i = 0; i < b.size(); ++i)
		{
			if(b[i]=='X'){
				counterbx++;
			}
			if(b[i]=='S'){
				bs++;
			}if(b[i]=='M'){
				bm++;
			}if(b[i]=='L'){
				bl++;
			}
		}
	
		// if(al>bm){
		// 	cout<<">"<<endl;
		// 	break;
		// }
		// if(am>bs){
		// 	cout<<">"<<endl;
		// 	break;
		// }
		// if(as<bm){
		// 	cout<<"<"<<endl;
		// 	break;
		// }
		// if(am<bl){
		// 	cout<<"<"<<endl;
		// 	break;
		// }

		if(al==1 && bl==0){
			cout<<">"<<endl;
		}
		else if(am==1 && bs==1){
			cout<<">"<<endl;
		}
		else if(bm==1 && as==1){
			cout<<"<"<<endl;
		}
		else if(bl==1 && al==0){
			cout<<"<"<<endl;
		}

		if(as==bs && as!=0){
			if(counterax>counterbx){
				cout<<"<"<<endl;
				
			}
			if(counterax<counterbx){
				cout<<">"<<endl;
				
			}
			if(counterax==counterbx){
				cout<<"="<<endl;
				
			}

		}
		
		if(al==bl && al!=0){
			if(counterax>counterbx){
				cout<<">"<<endl;
				
			}
			if(counterax<counterbx){
				cout<<"<"<<endl;
				
			}
			if(counterax==counterbx){
				cout<<"="<<endl;
				
			}

		}
		if(am==bm && bm!=0){
			cout<<"="<<endl;
		}

		// cout<<counterax<<" "<<counterbx<<endl;
	}
}