auto ask = [&](int l, int r)
        {
            cout<<"? "<<r-l+1<<" ";
            for(int i=l+1; i<=r+1; i++)     cout<<i<<" ";
            cout<<endl;
            int x;
            cin>>x;
            return x;
        };
 
        int low=0, high=n-1, ans, mid;
 
        while(low <= high)
        {
            mid = (low + high)/2;
 
            if(ask(low, mid) > getSum(low, mid))
                ans=mid, high=mid-1;
            else
                low=mid+1;
        }
 
        cout<<"! "<<ans+1<<endl;
