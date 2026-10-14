#include <iostream>

using namespace std;
int main() {
    int k, l, m , n, d, hasil_k, hasil_l, hasil_m, hasil_n, hasil_k_l, hasil_k_m, hasil_k_n, hasil_l_m, hasil_l_n, hasil_m_n;
    int hasil_klm, hasil_kln, hasil_lmn;
    int hasil_klmn;
    int hasil;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    hasil_k = d / k;
    hasil_l = d / l;
    hasil_m = d / m;
    hasil_n = d / n;
    
    hasil_k_l = d / (k * l);
    hasil_k_m = d /(k * m);
    hasil_k_n = d /(k * n);
    
    hasil_l_m = d /(l * m);
    hasil_l_n = d /(l * n);
    
    hasil_m_n = d /(m * n);

    hasil_klm = d / (k * l * m);
    hasil_kln = d / (k * l * n);
    hasil_lmn = d / (m * l * n);

    hasil_klmn = d / (k * l * m * n);

    hasil = (hasil_k + hasil_l + hasil_m + hasil_n) - (hasil_k_l + hasil_k_m + hasil_k_n + hasil_l_m + hasil_l_n + hasil_m_n) - (hasil_klm + hasil_kln + hasil_lmn) - (hasil_klmn);
    cout << hasil << endl; 
    return 0;
}