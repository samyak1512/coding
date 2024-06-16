#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void dfs(int node, const vector<int>& adj, vector<int>& dp) {
    if (dp[node] != -1) return;

    unordered_set<int> visited;
    vector<int> curr;
    int start_node = node;
    
    while (visited.find(node) == visited.end()) {
        curr.push_back(node);
        visited.insert(node);
        node = adj[node];
    }
    
    int repeated_element_ind = 0;
    while (curr[repeated_element_ind] != node) {
        ++repeated_element_ind;
    }

    int length_of_cycle = curr.size() - repeated_element_ind;
    for (int i = curr.size() - 1; i >= 0; --i) {
        if (i >= repeated_element_ind) {
            dp[curr[i]] = length_of_cycle;
        } else {
            dp[curr[i]] = length_of_cycle + repeated_element_ind - i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    vector<int> adj(n + 1);
    for (int i = 1; i <= n; ++i) {
        adj[i] = arr[i];
    }

    vector<int> dp(n + 1, -1);

    for (int i = 1; i <= n; ++i) {
        dfs(i, adj, dp);
    }

    for (int i = 1; i <= n; ++i) {
        cout << dp[i] << " ";
    }
    cout << endl;

    return 0;
}
