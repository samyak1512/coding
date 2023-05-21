#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::vector<std::string> v(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            v[i] = s.substr(i, 2);
        }

        for (int i = 0; i < n - 1; ++i) {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
