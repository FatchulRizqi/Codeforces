#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
int main() {
    std::string A, B;

    std::cin >> A;
    std::cin >> B;

    reverse(B.begin(), B.end());

    if ( A == B) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }


    return 0;
}