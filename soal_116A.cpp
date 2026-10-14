#include <iostream>
#include <vector>
int main() {
    int N, hitung = 0, kapasitas = 0, A,B;
    std::vector<int> masuk;
    std::vector<int> keluar;

    std::cin >> N;
    for ( int i = 0; i < N; i++) {
        std::cin >> A >> B;

        keluar.push_back(A);
        masuk.push_back(B);
    }

    for ( int i = 0; i < N; i++) {
        hitung = hitung + masuk[i] - keluar[i];

        if (kapasitas >= hitung) {
            continue;
        } else {
            kapasitas = hitung;
        }
    }

    std::cout << kapasitas << std::endl;

    return 0;
}