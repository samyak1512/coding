#include <bits/stdc++.h>
using namespace std;
#define achintya7567 ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define show(C) for (auto J: C) cout << J << " "; cout << endl;
#define show2d(C) for (auto J: C) {show(J); cout << endl;}
#define endl "\n"
#define F(I, S, E) for(ll I = S; I < E; I++)
#define vin(v) for (int I = 0; I < v.size(); I++){cin >> v[I];}
#define all(C) C.begin(), C.end()
#define vi vector<ll>

#define PYES cout<<"YES\n"
#define PNO cout<<"NO\n"
#define PYes cout<<"Yes\n"
#define PNo cout<<"No\n"

pair<int, pair<int,int>> dfs(vector<vector<int>> &vis, vector<vector<int>> &cnt, vector<string> &v, int i, int j, int pi, int pj, int id, int &count1){
    if(cnt[i][j]==id)return {0, {-1,-1}};
    if(vis[i][j])return {0, {-1,-1}};
    cnt[i][j]=id;
    if(v[i][j]=='.'){
        return {1, {i,j}};
    }
    if(v[i][j]=='B')return {0, {-1,-1}};
    vis[i][j]=1;
    count1++;
    vector<int> X={0,0,1,-1};
    vector<int> Y={1,-1,0,0};
    int n=vis.size();
    int m=vis[0].size();
    int count=0;
    pair<int, int> p1={-1,-1};
    for(int k=0; k<4; k++){
        int x=i+X[k];
        int y=j+Y[k];
        if(x==pi&&y==pj)continue;
        if(x>=n||x<0||y<0||y>=m)continue;
        auto p=dfs(vis,cnt, v, x,y,i,j, id, count1);
        count+=p.first;
        if(p.second.first!=-1){
            p1=p.second;
        }
    }
    if(count>1)p1={-1,-1};
    // cout<<i<<" "<<j<<" "<<count<<"\n";
    return {count, p1};
}

int main(){
    achintya7567;
    freopen("ready_go_part_2_validation_input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll testc=1;
    cin>>testc;
    for(int T=1; T<=testc; T++){
        cout<<"Case #"<<T<<": ";
        ll n,m; cin>>n>>m;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<vector<int>> vis(n, vector<int>(m)), ans(n, vector<int>(m)), cnt(n, vector<int>(m, -1));
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         vector<int> X={0,0,1,-1};
                
        //         vector<int> Y={1,-1,0,0};
        //         for(int k=0; k<4; k++){
        //             int x=i+X[k];
        //             int y=j+Y[k];
        //             if(x>=n||x<0||y<0||y>=m)continue;
        //             if(v[x][y]=='.')cnt[i][j]++;
        //         }
        //     }
        // }
        // show2d(cnt);
        int chk=0;
        int ans1=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int count1=0;
                if(v[i][j]=='W'&& vis[i][j]==0){
                    auto c=dfs(vis, cnt, v, i, j, -1, -1, m*i+j, count1);
                    // cout<<endl<<i<<" "<<j<<" "<<c<<endl;
                    if(c.first<=1){
                        ans[c.second.first][c.second.second]+=count1;
                        ans1=max(ans1, ans[c.second.first][c.second.second]);
                    }
                }
            }
        }
        cout<<ans1<<endl;
    }

return 0;
}