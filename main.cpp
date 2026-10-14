#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << std::string(4 - i, ' ') <<std::string(2*i + 1, '*') << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << std::string(5 - i - 1, ' ');
        for (int j = 0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}