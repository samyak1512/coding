#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
#define PI 3.141592653589793238462
#define INF 1e18
#define mod 1000000007
#define N 1000005
ll fac[N];

void factorial()
{
    fac[0] = 1;
    for(int i = 1; i <= N; i++)
    {
        fac[i] = fac[i-1]*i;
        fac[i] %= 1000000007;
    }
}

int knapsack(int wt[], int val[], int w, int n){

    ll dp[n+1][w+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<w+1; j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<w+1; j++){
            if(wt[i-1]<=j){
                dp[i][j] = max(val[i-1]+dp[i-1][w-wt[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][w];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int w;
    cin>>w;

    int val[n];
    for(int i=0; i<n; i++){
        cin>>val[i];
    }

    int wt[n];
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }

    

    int profit = knapsack(wt, val, w, n);
    cout<<profit;

    return 0;
}