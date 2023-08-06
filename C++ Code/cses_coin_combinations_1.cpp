#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int        long long
#define ll         long long
#define lld        long double
#define PI         3.141592653589793238462
#define pb         push_back
#define sz(x)     ((int)(x).size())
#define INF     1e18
#define MOD     1000000007
#define MOD1     998244353
#define INF     1e18
#define nline     "\n"
#define pb         push_back
#define ppb     pop_back
#define ff         first
#define ss         second
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
 
/*...............................................................*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
void google(int t) {cout << "Case #" << t << ": ";}
 
bool prime(int n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
/*.....................................................*/
// int count=0;
int f(vector<int>coins, vector<int>& dp, int amount_to_be_used) {
    if (amount_to_be_used < 0) {
        return 0;
    }
    if (amount_to_be_used == 0) {
        // count++;
        cout<<"hi"<<endl;
        return 1;
    }
    if (dp[amount_to_be_used] != -1) {
        return dp[amount_to_be_used];
    }
    dp[amount_to_be_used] = 0;
    // vector<int>temp_array = nums;
    while (coins.size()>0) {
        // if (coins[0] <= amount_to_be_used) { // Ensure the element can be used to reach the sum.

            for (int j = 0; j < coins.size(); ++j)
            {
                cout<<coins[j]<<"  ";
            }
            cout<<amount_to_be_used<<endl;
            dp[amount_to_be_used] = (dp[amount_to_be_used] + f(coins, dp, amount_to_be_used - coins[0]));
            reverse(coins.begin(), coins.end());
            coins.pop_back();
            reverse(coins.begin(), coins.end());
            
        // }

    }
     cout<<dp[amount_to_be_used]<<endl;
    return dp[amount_to_be_used];
}
void solve(int t){
    int n;
    int x;
    cin>>n>>x;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    // for (int j = 0; j < nums.size(); ++j)
    //         {
    //             cout<<nums[j]<<" ";
    //         }
    //         cout<<endl;

    // cout<<"count "<<count<<endl;
    vector<int>dp(x+1, -1);
    cout<<f(nums, dp, x)%MOD<<endl;
    // for (int i = 0; i < nums.size(); ++i)
    // {
    //     dp[nums[i]] = 1;
    // }
    for (int i = 0; i < dp.size(); ++i)
    {
        cout<<dp[i]<<" ";
    }
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
signed main(){
    fastio();
    int t=1;
    // cin>>t;
    for(int i=0;i<t;i++){
        solve(t);
    }
}
 