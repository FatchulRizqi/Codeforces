#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    char arr[N][2];

    for (int i = 0; i< N; i++) {
        scanf("%s", arr[i]);
    }

    for(int i = 0;i < N; i++) {
        if(arr[i][1] != arr[i+1][1]) {
            count++;
        } else {
            continue;
        }
    }

    if(count == 0) {
        printf("1");
    } else {
        printf("%d", count);
    }

    return 0;
}