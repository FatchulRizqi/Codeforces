#include <iostream>

using namespace std;
int main() {
    long long N, cek = 0, count = 0;

    std::cin >> N;
    while(true) {
        if (N == 0) {
            if ( count == 4 || count == 7) {
                cout << "YES" << endl;
                break;
            } else {
                cout << "NO" << endl;
                break;
            }
        }

        cek = N % 10;

        if ( cek == 4 || cek == 7) {
            N /= 10;
            count++;
            continue;
        }

        N /= 10;
    }
    return 0;
}