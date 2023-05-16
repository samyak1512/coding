#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long;
using namespace std;

std::vector<std::vector<int>> max_beauty(int n) {
    // Initialize the matrix with zeros
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    // Fill the matrix with the numbers from 1 to n**2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;
        }
    }
    return matrix;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // Test the function with n = 2
        auto result = max_beauty(n);
        for (const auto& row : result) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
        
    }
}
