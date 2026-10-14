#include <iostream>

int main() {
    int pisang, dolar, jumlah_pisang, bayar;
    std::cin >> pisang >> dolar >> jumlah_pisang;

    bayar = pisang * ( jumlah_pisang * (jumlah_pisang + 1)/ 2);
    if(dolar - bayar >= 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << bayar - dolar << std::endl;
    }
    return 0;
}