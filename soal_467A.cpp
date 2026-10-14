#include <iostream>

int main() {
    int N, count = 0;
    int penghuni[100], kap[100];

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> penghuni[i] >> kap[i];
    }

    for (int i = 0; i < N; i++) {
        if( penghuni[i] < kap[i] && kap[i] - penghuni[i] >= 2) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}