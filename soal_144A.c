#include <stdio.h>
#include <string.h>

int main() {
    int N, depan = 0, belakang = 0, angka = 0;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // depan
    int dep[N];
    memcpy(dep, arr, sizeof(arr));
    for (int i = 1; i < N; i++) {
        angka = dep[0];
        if(angka < dep[i]) {
            dep[0] = dep[i];
            dep[i] = angka;
            depan = i;
        }
    }

    // belakang
    int bel[N];
    memcpy(bel, arr, sizeof(arr));
    for (int i = N - 2; i >= 0; i--) {
        angka = bel[N - 1];
        if(angka > bel[i]) {
            bel[N - 1] = bel[i];
            bel[i] = angka;
            belakang = N - i - 1;
        }
    }

    int hasil = 0;
    if(depan >= N - belakang) {
        hasil = depan + belakang - 1;
    } else {
        hasil = depan + belakang;
    }
    printf("%d", hasil);

    return 0;
}