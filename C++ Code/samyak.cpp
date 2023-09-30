#include <iostream>
#include <vector>

std::pair<int, std::vector<int>> find_elements_greater_than_k(const std::vector<int>& result, int k) {
    int count = 0;
    std::vector<int> indices;

    for (size_t i = 0; i < result.size(); ++i) {
        if (result[i] > k) {
            count++;
            indices.push_back(i);
        }
    }

    return std::make_pair(count, indices);
}

int main() {
    // Given result array
    std::vector<int> result = {0, 1, 2, 2, 2, 1, 0};
    int k = 2;

    std::pair<int, std::vector<int>> resultPair = find_elements_greater_than_k(result, k);

    // Output the results
    std::cout << "Number of elements greater than k: " << resultPair.first << std::endl;
    std::cout << "Indices of elements greater than k:";
    for (int index : resultPair.second) {
        std::cout << " " << index;
    }
    std::cout << std::endl;

    return 0;
}
