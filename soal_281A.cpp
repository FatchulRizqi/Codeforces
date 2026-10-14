#include <iostream>
#include <cctype>
int main() {
    std::string kata;

    std::cin >> kata;

    kata[0] = toupper(kata[0]);

    std::cout << kata << std::endl;
    return 0;
}