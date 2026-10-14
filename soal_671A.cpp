#include <iostream>

int main() {
    int a, count = 0;

    std::cin >> a;

    while(true) {
        count += 1;
        if(a <= 5) {
            std::cout << count << std::endl;
            break;
        }

        a -= 5;
    }

    return 0;
}