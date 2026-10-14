#include <iostream>
#include <vector>
int main() {
    int soal =0;
    int angka1, angka2, angka3, pengerjaan_soal = 0;
    int angka_0 = 0, angka_1 = 0;
    
    std::cin >> soal;
    std::vector<std::vector<int>> jawaban(soal);

    for ( int i = 0; i < soal; i++) {
        std::cin >> angka1 >> angka2 >> angka3;
        jawaban[i].push_back(angka1);
        jawaban[i].push_back(angka2);
        jawaban[i].push_back(angka3);
    }

    for (int i = 0; i < jawaban.size(); i++) {
        for(int j = 0; j < 3; j++) {
            if (jawaban[i][j] == 1) {
                angka_1 += 1;
            } else {
                angka_0 += 1;
            }
        }

        if (angka_1 > angka_0) {
            pengerjaan_soal += 1;
        }
        
        angka_0 = 0;
        angka_1 = 0;
    }

    std::cout << pengerjaan_soal << std::endl;
    return 0;
}