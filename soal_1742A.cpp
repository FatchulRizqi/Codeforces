#include <iostream>

int main() {
  int T;
  std::cin >> T;

  for(int i = 0; i < T; i++) {
    int satu, dua, tiga;

    std::cin >> satu >> dua >> tiga;

    if( satu + dua == tiga || satu + tiga == dua || dua + tiga == satu) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
