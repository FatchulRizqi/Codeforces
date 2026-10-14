#include <cmath>
#include <iostream>
#include <vector>
#include <math.h>

int main() {
  int N;
  std::cin >> N;

  for(int i = 0; i< N; i++) {
    int angka, count_pangkat = 0, param, count_jumlah = 0;
    std::cin >> angka;
    std::vector<int> pecahan;
  
    while(angka != 0) {
      if(angka % 10 == 0) {
        angka /= 10;
        pecahan.push_back(0);
        count_pangkat++;
        continue;
      }

      param = angka % 10;
      pecahan.push_back(param);
      count_pangkat++;
      count_jumlah++;
      angka /= 10;
    }
    
    std::cout << count_jumlah << std::endl;
    for(int i = 0; i < count_pangkat; i++) {
      if(pecahan[i] == 0) {
        continue;
      }
      std::cout << pecahan[i]*pow(10, i) << ' ';
    }
    std::cout << std::endl;
  }

  return 0;
}
