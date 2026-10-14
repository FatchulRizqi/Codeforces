#include <iostream>
#include <vector>
int main() {
    int N, sementara = 0;
    std::vector<int> input;

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> sementara;

        input.push_back(sementara);
    }

    for (int i = 0; i < N; i++) {
        if ( input[i] == 1){
            std::cout << "HARD" << std::endl;
            return 0;
        }
    }

    std::cout << "EASY" << std::endl;
    return 0;
}