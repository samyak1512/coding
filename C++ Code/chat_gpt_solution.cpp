#include <iostream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

std::pair<int, std::vector<int>> knapsack(int capacity, const std::vector<int>& weights, const std::vector<int>& values) {
    // Initialize the knapsack table with zeros
    std::vector<std::vector<int>> table(weights.size() + 1, std::vector<int>(capacity + 1));
    // Initialize the keep table with zeros
    std::vector<std::vector<int>> keep(weights.size() + 1, std::vector<int>(capacity + 1));
    for (int i = 1; i <= weights.size(); i++) {
        for (int j = 1; j <= capacity; j++) {
            // If the item fits in the knapsack, choose the maximum value between including the item
            // and not including the item
            if (weights[i - 1] <= j) {
                int value_with_item = values[i - 1] + table[i - 1][j - weights[i - 1]];
                int value_without_item = table[i - 1][j];
                if (value_with_item > value_without_item) {
                    table[i][j] = value_with_item;
                    keep[i][j] = 1;
                } else {
                    table[i][j] = value_without_item;
                    keep[i][j] = 0;
                }
            }
            // If the item does not fit in the knapsack, the value is the same as not including the item
            else {
                table[i][j] = table[i - 1][j];
                keep[i][j] = 0;
            }
        }
    }
    // Retrieve the indices of the items included in the knapsack
    std::vector<int> included_items;
    int i = weights.size(), j = capacity;
    while (i > 0 && j > 0) {
        if (keep[i][j] == 1) {
            included_items.push_back(i - 1);
            j -= weights[i - 1];
        }
        i--;
    }
    return {table[weights.size()][capacity], included_items};
}

int main() {
    std::vector<int> weights = {1,2,2,1};
    std::vector<int> values = {1,2,3,4};
    auto result = knapsack(4, weights, values);
    std::cout << result.first << std::endl;
    int len=0;
    // Output: 14 (items 3 and 4 with values 7 and 8)
    for (int weight : result.second) {
        std::cout << weight << " ";
        len++;
    }
    int defeat[len];

    for (int weight : result.second) {
        std::cout << weight << " ";
        
        
    }
    

    
    // Output: 3 4
    return 0;
}