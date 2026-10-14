#include <iostream>

int main() {
    int N, time, ukur = 0, count;
    std::string baris;

    std::cin >> N >> time;
    std::cin >> baris;

    for(int i = 0; i < time; i++) {
        for ( int j = 0; j < baris.size() - 1; j++) {
            if(baris[j] == 'B' && baris[j + 1] == 'G' && baris[j] != baris.size() - 1){
                baris[j] = 'G';
                baris[j+1] = 'B';
                j += 1;
            } 
        }
    }

    std::cout << baris << std::endl;

    return 0;
}