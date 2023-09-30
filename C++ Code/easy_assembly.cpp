#pragma GCC optimize("O3,unroll-loops")

#include<bits/stdc++.h>

using namespace std;
using namespace chrono;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define clr(x) memset(x, 0, sizeof(x))

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
	int n;
	cin>>n;
	int maxi = 0;
	map<int, int>mymap;
	vector<vector<int>>v;
	for(int i=0;i<n;i++){
		int s;
		cin>>s;
		vector<int>temp;
		for(int j=0;j<s;j++){
			int x;
			cin>>x;
			maxi = max(maxi, x);
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	debug(v);
	int split =0;
	int comb = 0;
	vector<vector<pair<int, int>>>answer;

	for(auto it:v){
		vector<pair<int,int>>temp;
		for(int i=0;i<it.size();i++){
			temp.push_back({it[i], 0});
		}
		answer.push_back(temp);

	}
	vector<int>sortedv;
	set<pair<int, int>>se;
	for(auto it:v){
		for(auto il:it){
			sortedv.push_back(il);
		}
	}
	sort(sortedv.begin(), sortedv.end());
	int j = 0;
	for(auto it:sortedv){
		
			mymap.insert({it, j++});
	}
	debug(mymap);
	debug(answer);
	// int i =0;
	// int count = 0;
	// while(i<=maxi){
	// 	for(auto& it:answer){
	// 		// debug(answer);
	// 		for(auto& il:it){
	// 			if(il.first==i){
	// 				debug(il);
	// 				debug(count);
					
	// 				il.second=count;
	// 				count++;
					
	// 			}
	// 		}
	// 	}
	// 	i++;
	// }
	// debug(mymap);
	for(auto& it:answer){
		for(auto& il:it){

			auto sam = mymap.find(il.first);
			// cout<<sam->first<<endl;
			// debug(sam->first);
			// debug(sam->second);
			debug(sam->second);
			debug(il);
			il.second = sam->second;
			debug(il);
			// debug(sam->second);
		}
	}
	debug(split);
	for(auto& it:answer){
		for(int i=0;i<it.size()-1;i++){
			if(it[i+1].second-it[i].second!=1){
				// debug(it[i]);
				split++;
			}
		}
	}


	debug(v);
	debug(answer);
	debug(split);
	comb = n+split-1;
	debug(comb);
	cout<<split<<" "<<comb<<endl;

	
}

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
        fastio();
        auto start1 = high_resolution_clock::now();
        int tt = 1;
        // cin >> tt;
        while (tt--)
        {
            solve();
        }
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifndef ONLINE_JUDGE
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}