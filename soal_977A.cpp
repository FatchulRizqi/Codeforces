#include <iostream>

int main() {
    int N, K;

    std::cin >> N >> K;
    while(K--) {
        if( N % 10 == 0) {
            N = N / 10;
            continue;
        } 
        N--;
    }

    std::cout << N << std::endl;

    return 0;
}