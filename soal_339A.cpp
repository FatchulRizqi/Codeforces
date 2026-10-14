#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    std::string kata, kata_baru;
    bool pointer = true;

    std::cin >> kata;
    for(int i = 0; i < kata.size(); i++) {
        if ( kata[i] == '+') {
            continue;
        } else {
            kata_baru += kata[i];
        }
    }
    // std::cout << kata_baru << endl;
    sort(kata_baru.begin(), kata_baru.end());

    for (int i = 0; i < kata_baru.size(); i++) {
        if ( i + 1 == kata_baru.size()) {
            std::cout << kata_baru[i];
        } else {
            std::cout << kata_baru[i] << '+';
        }
    }
    return 0;
}