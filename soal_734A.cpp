#include <iostream>

int main() {
    int N, anton = 0, danik = 0;
    std::string kata;
    
    std::cin >> N;
    std::cin >> kata;

    for (int i = 0; i < kata.size(); i++)
    {
        if ( kata[i] ==  'A') {
            anton++;
        } else {
            danik++;
        }
    }
    
    if ( anton > danik ) {
        std::cout << "Anton" << std::endl;
    } else if( anton < danik) {
        std::cout << "Danik" << std::endl;
    } else {
        std::cout << "Friendship" << std::endl;
    }
    return 0;
}