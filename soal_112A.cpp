#include <iostream>
#include <cctype>

int main() {
    int jawaban;
    std::string satu, dua;

    std::cin >> satu;
    std::cin >> dua;

    for ( int i = 0; i < satu.size();i++) {
        if (std::tolower(satu[i]) > std::tolower(dua[i])) {
            jawaban = 1;
            break;
        } else if (std::tolower(satu[i]) < std::tolower(dua[i])) {
            jawaban = -1;
            break;
        } else {
            jawaban = 0;
        }
    }

    std::cout << jawaban << std::endl;
    return 0;
}