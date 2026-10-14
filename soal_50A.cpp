#include <iostream>

int main() {
    int baris, kolom, jawaban;

    std::cin >> baris >> kolom;

    jawaban = baris * kolom / 2;

    std::cout << jawaban << std::endl;

    return 0;
}