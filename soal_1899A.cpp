#include <iostream>
#include <istream>

int main() {
  int N;
  std::cin >> N;

  for(int i = 0; i < N; i++) {
    int angka;
    std::cin >> angka;

    if(angka % 3 == 0) {
      std::cout << "Second" << std::endl;
    } else {
      std::cout << "First" << std::endl;
    }
  }
  


  return 0;
}
