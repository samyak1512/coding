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

void solve(int count)
{   
    // int count = 1;
    // int totaly = total;
    // int hola  = totaly - testcase;
	int n;
	int k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    if(n>2*k){
        std::cout << "Case #" << count << ": NO" << std::endl;
    }
    else{
        map<int, int>mymap;
        for (int i = 0; i < n; ++i)
        {
            mymap[v[i]]++;
        }
        int flag = 0;
        for(auto it:mymap){
            if(it.second>2){
                std::cout << "Case #" << count << ": NO" << std::endl;
                flag = 1;
            }
        }
        if(flag==0){
            std::cout << "Case #" << count << ": YES" << std::endl;
        }

    }
    

	
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
        cin >> tt;
        int count = 1;
        int total = tt;
        while (tt--)
        {
            solve(count);
            count++;
        }
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifndef ONLINE_JUDGE
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}