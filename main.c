#include <stdio.h>

int main() {
    int N[1000][1000], makan[1000], jumlah, makanan;

    scanf("%d", &jumlah);
    for(int i = 0; i < jumlah;i++) {
        scanf("%s %d", &N[i], &makan[i]);
    }

    scanf("%d", &makanan);
    return 0;
}
