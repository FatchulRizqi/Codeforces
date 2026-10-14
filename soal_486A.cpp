#include <iostream>

int main() {
    long long N, result = 0, ganjil = 0, genap = 0;

    std::cin >> N;

    if ( N % 2 == 0) {
        ganjil = N / 2;
        genap = N / 2;
        result = (genap * genap + genap) - (ganjil * ganjil);
    } else {
        ganjil = N / 2 + 1;
        genap = N / 2;
        result = (genap * genap + genap) - (ganjil * ganjil) ;
    }

    std::cout << result << std::endl;

    return 0;
}