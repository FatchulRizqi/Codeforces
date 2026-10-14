#include <iostream>
#include <vector>
int main(){
    int soal = 0, jawaban = 0;
    std::vector<std::string> lambang;
    std::cin >> soal;

    for (int i = 0; i < soal; i++) {
        std::string kata;

        std::cin >> kata;
        lambang.push_back(kata);
    }

    for (int i = 0; i < lambang.size(); i++) {
        if (lambang[i][1] == '+') {
            jawaban += 1;
        } else{
            jawaban -= 1;
        }
    }
    
    std::cout << jawaban << std::endl;
    return 0;
}