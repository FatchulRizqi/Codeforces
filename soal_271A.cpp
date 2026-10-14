#include <iostream>
#include <vector>
int main() {
    int tahun = 0, copy, cek;
    std::vector<int> angka;
    std::cin >> tahun;

    while (true) {
        tahun++;
        copy = tahun;
        while (true) {
            if(copy == 0) {
                break;
            }
            cek = copy % 10;
            angka.push_back(cek);
            copy /= 10;
        }

        if(angka[0] == angka[1] || angka[0] == angka[2] || angka[0] == angka[3]) {} 
        else if (angka[1] == angka[2] || angka[1] == angka[3]) {}
        else if(angka[2] == angka[3]){}
        else {
            std::cout << tahun << std::endl;
            break;
        }

        angka.clear();
    }

    return 0;
}