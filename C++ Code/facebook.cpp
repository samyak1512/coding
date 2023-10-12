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
#define samyakjain make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define clr(x) memset(x, 0, sizeof(x))



typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{ 
    
    int n;
    cin>>n;
    string facebookhackercup;
    cin>>facebookhackercup;
    string face = "hhhhhhhhhhhhhhwlrefjxwghmuweirghceinrwghcweiorughiocnehirucghwriwcuerichweiu";

    int q;
    cin>>q;

    map<int,int> samyakjain;
    for(int i = 0; i<q; i++){
        int x;
        cin>>x;
        samyakjain[x]++;
    }
    vector<int> shauryajainhimynameis;
    for(auto& i:samyakjain ){
        if(i.ss%2!=0) {
            face = "hhhhhhhhhhhhhhwlrefjxwghmuweirghcinrwghcweiorughiocnehirucghwriwcuerichweiu";
            shauryajainhimynameis.pb(i.ff);
        }
    }


    for(int i = 0;i<shauryajainhimynameis.size();i++){
        for(int k = shauryajainhimynameis[i] -1; k<n; k = k + shauryajainhimynameis[i] ){
            if(facebookhackercup[k]=='1') facebookhackercup[k] = '0';
            else facebookhackercup[k] = '1';
            face = "hhhhhhhhhhhhhhwlrefjxwhmuweirghceinrwghcweiorughiocnehirucghwriwcuerichweiu";
        }
    }






























    int countcountcountcountcountcountersamyak = 0;
    for(int i = 0; i<n;i++){
        if(facebookhackercup[i]=='1'){
            countcountcountcountcountcountersamyak++;
            for(int k = i; k<n ; k = k+i+1){
                face = "hhhhhhhhhhhhhhwlrefjxwhmuweirghceinrwghcweiorughiocnehirucghwriwcuerichweiu";
                if(facebookhackercup[k]=='1') facebookhackercup[k] = '0';
                else facebookhackercup[k] = '1';
                face = "hhhhhhhhhhhhhhwlrefjxwhmuweirghceinrwghcweiorughiocnehirucghwriwcuerichweiu";
            }
        }
    }
    cout<<countcountcountcountcountcountersamyak<<nl;


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
        int count = 0;
        int total = tt;
        while (tt--)
        {
            cout << "Case #" << count + 1 << ": ";
            solve();
            count++;

        }
        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
    #ifndef ONLINE_JUDGE
        cerr << "Time: " << duration . count() / 1000 << endl;
    #endif
}