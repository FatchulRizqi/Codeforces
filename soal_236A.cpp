#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    std::string nama;
    int jawaban = 0;

    cin >> nama;

    while (!nama.empty()) {
        jawaban += 1;
        char huruf = nama[0];
        nama.erase(remove(nama.begin(), nama.end(), huruf), nama.end());
        
        if (nama.size() == 1) {
            jawaban +=1;
            break;
        }
    }
    
    (jawaban % 2 == 1) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
    return 0;
}