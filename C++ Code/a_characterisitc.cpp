#include <iostream>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int comb(int x, int y){
   int ans = fact(x) / (fact(y) * fact(x-y));
   return ans;
}
int main() {

   int n;
   cin>>n;
   int k;
   cin>>k;
   int hola;
   int flag=0;
   for (int i = 0; i < n; ++i)
   {
      hola=0;
      for (int j = 0; j <n; ++j)
      {
         hola = comb(j,2)+comb(n-j,2);
         if(hola==k){
            break;
            flag==1;
         }
         else{
            hola=0;
         }
      }

   }
   int x,y;
   if (flag==1){
      cout<<"yes"<<endl;
   }
   else{
      cout<<"no"<<endl;
   }
   
   // int hola = comb(n,r);
   cout<<hola;
   
   return 0;
}