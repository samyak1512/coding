#include <bits/stdc++.h>
using namespace std;
    
int main()
{   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        
        int samyak = 0;



        // Mark all array elements as not visited
        vector<bool> visited(n, false);
      
        // Traverse through array elements and
        // count frequencies
        for (int i = 0; i < n; i++) {
      
            // Skip this element if already processed
            if (visited[i] == true)
                continue;
      
            // Count frequency
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                    count++;
                }
            }
            
            samyak = count + samyak +1;

        }
    cout<<samyak<<endl;
    }
}