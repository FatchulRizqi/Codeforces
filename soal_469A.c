// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int N, panjang = 0;
//     scanf("%d", &N);
//     int X[105], Y[105];
//     bool hasil[105] = {false};

//     while (scanf("%d", &X[panjang]) == 1) {
//         panjang++;

//         char cek_enter = getchar(); 
        
//         if (cek_enter == '\n') {
//             break;
//         }
//     }

//     panjang = 0;

//     while (scanf("%d", &Y[panjang]) == 1) {
//         panjang++;

//         char cek_enter = getchar(); 
        
//         if (cek_enter == '\n') {
//             break;
//         }
//     }

//     for(int i = 0; i < sizeof(X) / sizeof(X[0]); i++) {
//         hasil[X[i] - 1] = true;
//     }

//     for(int i = 0; i < sizeof(Y) / sizeof(Y[0]); i++) {
//         hasil[Y[i] - 1] = true;
//     }

//     for(int i = 0; i < N; i++) {
//         if(hasil[i] == false) {
//             printf("Oh, my keyboard!");
//             return 0;
//         }
//     }

//     printf("I become the guy.");
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
int main() {
    int N, X, Y, param = 0;
    scanf("%d", &N);
    bool jawab[105] = {false};

    scanf("%d", &X);
    for(int i = 0; i < X; i++) {
        scanf("%d", &param);

        jawab[param - 1] = true;
    }

    scanf("%d", &Y);
    for(int i = 0; i < Y; i++) {
        scanf("%d", &param);

        jawab[param - 1] = true;
    }

    for(int i = 0; i < N; i++) {
        if (jawab[i] == false) {
            printf("Oh, my keyboard!");
            return 0;
        }
    }

    printf("I become the guy.");

    return 0;
}