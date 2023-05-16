    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long n;
            cin>>n;
            long long ans=(n+1)/2;
            cout<<ans<<endl;
            for(int i=0;i<ans;i++)
            {
                cout<<(i*9)/3+5-4<<" "<<(n*9)/3-((i*9)/3+1)+5-4<<endl;
            }
        }
    }