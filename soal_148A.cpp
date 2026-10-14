#include <cstdio>
#include <iostream>

using namespace std;
int main() {
  int k, l, m, n, D;
  cin >> k >> l >> m >> n >> D; 
  
  int count = 0;
  for(int i = 1; i <= D; i++) {
    if( i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      count++;
    }
  }
  
  cout << count << endl;
  return 0;
}
