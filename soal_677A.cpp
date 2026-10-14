#include <iostream>
#include <vector>
int main() {
    int N, pagar, lebar = 0, simpan = 0;
    std::vector<int> tinggi;
    std::cin >> N >> pagar;

    for (int i = 0; i < N; i++) {
        std::cin >> simpan;

        tinggi.push_back(simpan);
    }

    for (int i = 0; i < N; i++){
        if(tinggi[i] > pagar) {
            lebar += 2;
        } else {
            lebar += 1;
        }
    }

    std::cout << lebar << std::endl;
    return 0;
}