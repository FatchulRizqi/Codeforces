#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    int count = 0;
    int jawaban[105];
    char A[105], B[105];

    scanf("%s", &A);
    scanf("%s", &B);
    
    int panjang = strlen(A);

    while (true){
        if(panjang == 0) {
            break;
        }

        if(A[count] == B[count]) {
            jawaban[count] = '0';
        } else {
            jawaban[count] = '1';
        }

        count++;
        panjang--;
    }
    
    for(int i = 0; i < count; i++) {
        printf("%c", jawaban[i]);
    }
    return 0;
}