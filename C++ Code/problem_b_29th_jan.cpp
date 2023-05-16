#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;
#define ll long long

unordered_map<int,int> factors;

int getFactors(ll num){
int maxPower = 1;
for(int i = 2; i <= sqrt(num); i++){
if(!(num % i)){
int cnt = 0;
while(num % i == 0){
cnt++;
num /= i;
}
factors[i] = cnt;
maxPower = max(maxPower, cnt);
}
}

if(num != 1){
    factors[num] = 1;
}

return maxPower;
}

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
int ans = 0;
int maxPower = getFactors(n);
for(int i = 0; i < maxPower; i++){
int temp = 1;
for(auto item : factors){
if(item.second > 0){
factors[item.first]--;
temp *= item.first;
}
}
ans += temp;
}
cout << ans << endl;
factors.clear();
}
return 0;
}