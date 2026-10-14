#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main() {
    int n, banyak_angka, angka, frek_ganjil = 0, genap_genap = 0, genap_ganjil = 0, pointer = 0, max;
    int simpan[10000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &banyak_angka);
        for (int j = 0; j < banyak_angka; j++) {
            scanf("%d", &angka);

            if(angka % 2 != 0) {
                frek_ganjil += 1;
            } else if (angka % 4 == 0) {
                genap_genap +=1;
            } else if (angka % 4 == 2) {
                genap_ganjil += 1;
            }
        }

        max = fmax(frek_ganjil, genap_genap);
        max = fmax(max, genap_ganjil);

        simpan[i] = max;
        frek_ganjil = 0;
        genap_genap = 0;
        genap_ganjil = 0;
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", simpan[i]);
    }
    return 0;
}