#include <stdio.h>

int main() {
    int N;
    int arr[100], jawaban[100];

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= N; i++) {
        int angka = arr[i - 1];
        jawaban[angka - 1] = i;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", jawaban[i]);
    }
    return 0;
}