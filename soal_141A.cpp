#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::string satu, dua, hasil;
  bool hasil_bool[101] = {false};

  std::cin >> satu;
  std::cin >> dua;
  std::cin >> hasil;

  bool it_satu = false;
  for(int i = 0; i < satu.size(); i++) {
    for(int j = 0; j < hasil.size(); j++) {
      if(hasil_bool[j] == false && satu[i] == hasil[j]) {
        it_satu = true;
        hasil_bool[j] = true;
        break;
      }
    }
    if(it_satu) {
      it_satu = false;
    } else {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }
  
  bool it_dua = false;
  for(int i = 0; i < dua.size(); i++) {
    for(int j = 0; j < hasil.size(); j++) {
      if(hasil_bool[j] == false && dua[i] == hasil[j]) {
        it_dua = true;
        hasil_bool[j] = true;
        break;
      }
    }
    if(it_dua) {
      it_dua = false;
    } else {
      std::cout << "NO" << std::endl;
      return 0;
    }
  }
  
  bool param = false;
  for(int i = 0; i < hasil.size(); i++) {
    if(hasil_bool[i] == false) {
      param = true;
      std::cout << "NO" << std::endl;
      break;
    }
  }
  
  if(!param) {
    std::cout << "YES" << std::endl;
  }

  return 0;
}
