#include <stdio.h>
#include <stdbool.h>
long long jawaban[200000];
int main() {
    int N, B;
    scanf("%d", &N, &B);
    long long waktu[N], run[N];
    for(int i = 0; i < N; i++) {
        scanf("%lld %lld", &waktu[i], &run[i]);
    }

    int stuck = 0, count = 0, param = false;
    int antrean = B;
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            stuck += waktu[i] + run[i]; 
        } else {
            stuck += run[i];
        }

        int loop = i + 1;
        while (true) {
            if(waktu[loop] < stuck && antrean != 0) {
                antrean--;
            } else if (waktu[loop] < stuck && antrean == 0 ) {
                waktu[loop] = 0;
                run[loop] = 0;
            } else if (waktu[loop] > stuck && antrean > 0){
                break;
            } else if (waktu[loop] == stuck) {
                param = true;
            }
            loop++;
        }

        if(param) {
            jawaban [count] = -1;
        } else {
            jawaban [count] = stuck;
        }
        count++;
    }

    for(int i = 0; i < count; i++) {
        printf("%d ", jawaban[i]);
    }
    return 0;
}