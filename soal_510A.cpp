#include <iostream>

int main() {
  int baris, kolom;
  std::cin >> baris >> kolom;

  for(int i = 0; i < baris; i++) {
    for(int j = 0; j < kolom; j++) {
      if((i + 1) % 2 != 0) {
        std::cout << '#';
      } else {
        if((i + 1) % 4 == 0 && j == 0) {
          std::cout << '#';
        } else {
          if((i + 1) % 4 != 0 && j == kolom - 1) {
            std::cout << '#';
          } else {
            std::cout << '.';
          }
        }
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
