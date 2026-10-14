#include <iostream>
#include <iomanip>

int main() {
    int N;
    double volume, sum;

    std::cin >> N;
    for(int i = 0; i < N; i++) {
        std::cin >> sum;

        volume += sum;
    }

    std::cout << volume / N << std::endl;



    return 0;
}