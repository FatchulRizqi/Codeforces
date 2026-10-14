#include <stdio.h>
#include <stdbool.h>

long long A[10005], B[10005];
long long jawaban[10005];

int main() {
    int N;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%lld %lld", &A[i], &B[i]);
    }

    for(int i = 0; i < N; i++) {
        if(A[i] % B[i] == 0 || (A[i] == 0 && B[i] == 0)) {
            jawaban[i] = 0;
            continue;
        }

        long long bagi = (A[i] / B[i]) + 1;
        jawaban[i] = (bagi * B[i]) - A[i]; 
    } 

    for(int i = 0; i < N; i++) {
        printf("%lld\n", jawaban[i]);
    }
    return 0;
}
