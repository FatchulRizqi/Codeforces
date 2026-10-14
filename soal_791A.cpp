#include <iostream>

int main() {
    int a, b, count = 0;

    std::cin >> a >> b;

    while(true) {
        a *= 3;
        b *= 2;

        count += 1;

        if (a > b) {
            std::cout << count << std::endl;
            break;
        }
    }


    return 0;
}