#include <iostream>

int main() {
    int count = 0, jejer = 0;
    std::string stone;

    std::cin >> count >> stone;

    for ( int i = count - 1; i > 0; i--) {
        if (stone[i] == stone[i - 1] ) {
            jejer += 1;
        }
    }
    std::cout << jejer << std::endl;
    return 0;
}