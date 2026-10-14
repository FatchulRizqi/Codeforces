#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        if(i == N - 1) {
            if( N % 2 == 0) {
                printf("I love it");
                break;
            } else {
                printf("I hate it");
                break;
            }
        }

        if((i + 1) % 2 == 1) {
            printf("I hate that ");
        } else {
            printf("I love that ");
        }
    }

    return 0;
}