#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    long long N, param = 0, hasil = 0;
    scanf("%lld", &N);
    param = N;

    while(true) {
        if(param == 0) {
            break;
        }

        if( param / 100 > 0 ) {
            hasil += param / 100;
            param = param % 100;
        } 

        if( param / 20 > 0) {
            hasil += param / 20;
            param = param % 20;
        }

        if( param / 10 > 0) {
            hasil += param / 10;
            param = param % 10;
        }

        if( param / 5 > 0) {
            hasil += param / 5;
            param = param % 5;
        }

        if (param < 5) {
            hasil += param;
            param = 0;
        }
    }

    printf("%d", hasil);

    return 0;
}