#include <iostream>
#include <vector>

using namespace std;

int main() {
    int soal = 0, peringkat = 0, jawaban = 0;
    vector<int> input_1;

    cin >> soal >> peringkat;

    for ( int i = 0; i < soal; i++) {
        int sementara;

        cin >> sementara;
        input_1.push_back(sementara);
    }

    for (int i = 0; i < input_1.size(); i++) {
        if (input_1[i] < 1) {
            break;
        }

        if( input_1[i] >= input_1[peringkat - 1]) {
            jawaban += 1;
        } else {
            break;
        }
    }

    cout << jawaban << endl;
    return 0;
}