#include <iostream>
#include <utility>
#include <vector>

int main() {
  int N, count = 0;
  std::cin >> N;
  std::vector<std::pair<int, int>> pertandingan;

  for(int i = 0; i < N; i++) {
    std::pair<int, int> pert;
    std::cin >> pert.first >> pert.second;

    pertandingan.push_back(pert);
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(pertandingan[i].first == pertandingan[j].second) {
        count++;
      }
    }
  }

  std::cout << count << std::endl;

  return 0;
}
