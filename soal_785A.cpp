#include <iostream>
#include <string>
#include <vector>

int main() {
  int N, count = 0;
  std::vector<std::string> bentuk;

  std::cin >> N;
  for(int i = 0; i < N; i++) {
    std::string kata;
    
    std::cin >> kata;
    bentuk.push_back(kata);
  }

  for(int i = 0; i < N; i++) {
    if(bentuk[i][0] == 'T') {
      count += 4;
    } else if (bentuk[i][0] == 'C') {
      count += 6;
    } else if (bentuk[i][0] == 'O') {
      count += 8;
    } else if(bentuk[i][0] == 'D') {
      count += 12;
    } else if (bentuk[i][0] == 'I') {
      count += 20;
    }
  }

  std::cout << count << std::endl;
  return 0;
}
