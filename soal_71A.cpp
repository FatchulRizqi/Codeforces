#include <iostream>
#include <vector>
#include <iterator>

int main() {
    int jumlah=0;
    std::vector<std::string> kumpulan_kata;
    std::string kata;

    std::cin >> jumlah;
    for (int i{jumlah}; i > 0; i--) {
        std::cin >> kata;

        kumpulan_kata.push_back(kata);
    }

    for(int i = 0; i < kumpulan_kata.size(); i++) {
        if (kumpulan_kata[i].size() > 10) {
            std::cout << kumpulan_kata[i].front() << kumpulan_kata[i].size() - 2 << kumpulan_kata[i].back() << std::endl;
        } else {
            std::cout << kumpulan_kata[i] << std::endl;
        }
    }
    return 0;
}