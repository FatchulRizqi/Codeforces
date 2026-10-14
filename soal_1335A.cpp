#include <cmath>
#include <iostream>
#include <math.h>

int main() {
  int N;
  std::cin >> N;

  for(int i = 0; i< N; i++) {
    double angka;
    int hasil;
    std::cin >> angka;
    
    if(angka <= 2) {
      hasil = 0;
    } else {
      hasil = std::ceil(angka / 2) - 1;
    }
       
    std::cout << hasil << std::endl;
  }


  return 0;
}
