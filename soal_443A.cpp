#include <iostream>
#include <string.h>
#include <vector>

int main() {
    bool param = false;
    int count = 0, count_vektor = 0;
    std::string kata;
    std::vector<char> huruf;
    getline(std::cin, kata);  

    for(int i = 0; i < kata.size(); i++) {
        if(kata[i] >= 'a' && kata[i] <= 'z') {
            for(int j = 0; j < huruf.size(); j++) {
                if(kata[i] == huruf[j]) {
                    param = true;
                    break;
                }
            }

            if(!param) {
                huruf.push_back(kata[i]);
                count++;
            }
            param = false;
        }
    }

    std::cout << count << std::endl;
    return 0;
}