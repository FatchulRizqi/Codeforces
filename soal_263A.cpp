#include <iostream>
#include <vector>
#include <cstdlib>
int main() {
    int baris, kolom, jawaban;
    std::vector<std::vector<int>> matriks (5, std::vector<int> (5));

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5;j++) {
            int sementara;

            std::cin >> sementara;

            if (sementara == 1) {
                baris = i + 1;
                kolom = j + 1;
            }
            matriks[i][j] = sementara;
        }
    }

    jawaban = std::abs(baris - 3) + std::abs(kolom - 3);

    std::cout << jawaban << std::endl;

    return 0;
}