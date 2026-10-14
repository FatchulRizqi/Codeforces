// #include <stdio.h>

// int main(){
//     int W = 0;

//     scanf("%d", &W);

//     if(W % 2 == 0 && W != 2) {
//         printf("YES");
//     } else {
//         printf("NO");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int jumlah, angka[100];
    
    scanf("%d", &jumlah);
    
    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &angka[i]);
    }
    
    for (int i = jumlah - 1; i >= 0; i--) {
        printf("%d\n", angka[i]);
    }

    return 0;
}