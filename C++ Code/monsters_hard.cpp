#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int test_cases;
cin >> test_cases;
for(int i = 0; i < test_cases; i++){
int n;
cin >> n;
vector<int> true_healths(n);
for(int j = 0; j < n; j++){
cin >> true_healths[j];
}
vector<int> moves_list;
for(int k = 0; k < n; k++){
vector<int> healths(true_healths.begin(), true_healths.begin() + k + 1);
priority_queue<int, vector<int>, greater<int>> pq(healths.begin(), healths.end());
int prev = 0;
int moves = 0;
while(!pq.empty()){
int current = pq.top();
pq.pop();
if(current - prev == 0){
continue;
}
else{
moves = moves + (current - prev - 1);
pq.push(prev + 1);
}
prev = current;
}
moves_list.push_back(moves);
}
for(int x : moves_list){
cout << x << " ";
}
cout << endl;
}
return 0;
}