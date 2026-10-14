#include <iostream>
#include <cctype>
#include <algorithm>

int main() {
    int huruf_besar =0, huruf_kecil = 0;
    std::string kata;

    std::cin >> kata;
    for (int i = 0; i < kata.size(); i++) {
        if (std::islower(kata[i])) {
            huruf_kecil++;
        } else if(std::isupper(kata[i])) {
            huruf_besar++;
        }
    }

    if (huruf_besar > huruf_kecil) {
        for(int i = 0; i < kata.size(); i++) {
            kata[i] = std::toupper(kata[i]);
        }
        std::cout << kata << std::endl;
    } else if (huruf_besar < huruf_kecil) {
        for(int i = 0; i < kata.size(); i++) {
            kata[i] = std::tolower(kata[i]);
        }
        std::cout << kata << std::endl;
    } else {
        for(int i = 0; i < kata.size(); i++) {
            kata[i] = std::tolower(kata[i]);
        }
        std::cout << kata << std::endl;
    }

    return 0;
}