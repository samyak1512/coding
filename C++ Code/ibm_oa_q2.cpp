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

int arr[3];
int dp[201][201][201];

void helper(int nR, int nG, int nB){

    if(nR==0 && nG==0){
        arr[1] = 1;
        return;
    }
    else if(nG==0 && nB==0){
        arr[0] = 1;
        return;
    }
    else if(nB==0 && nR==0){
        arr[2] = 1;
        return;
    }

    if(dp[nR][nB][nG] == 1){
        return;
    }

    dp[nR][nB][nG] = 1;


    // R & G
    if(nR>0  &&  nG>0){
        helper(nR-1, nG-1, nB+1);
    }

    // R & B
    if(nR>0  &&  nB>0){
        helper(nR-1, nG+1, nB-1);
    }

    // B & G
    if(nG>0 && nB>0){
        helper(nR+1, nG-1, nB-1);
    }

    if(nG>1){
        helper(nR, nG-1, nB);
    }

    if(nR>1){
        helper(nR-1, nG, nB);
    }

    if(nB>1){
        helper(nR, nG, nB-1);
    }

}

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    // R-0  B-1  G-2
    arr[0] = arr[1] = arr[2] = 0;
    int nR=0, nB=0, nG=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'G'){
            nG++;
        }
        else if(s[i] == 'R'){
            nR++;
        }
        else{
            nB++;
        }
    }

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            for(int k=0; k<=n; k++){
                dp[i][j][k] = 0;
            }
        }
    }

    helper(nR, nG, nB);

    if(arr[1] == 1){
        cout<<"B";
    }

    if(arr[2] == 1){
        cout<<"G";
    }

    if(arr[0] == 1){
        cout<<"R";
    }
    // debug(dp);
    cout<<endl;

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