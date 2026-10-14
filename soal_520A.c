// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>

// int main() {
//     int N, count = 1, ada_huruf = 0;
//     char arr[105], huruf_sama[105];
//     bool param = true, ada = true;

//     scanf("%d", &N);
//     scanf("%s", arr);

//     if (N < 26) {
//         printf("INI N KURANG DARI 26");
        
//         printf("NO");
//         return 0;
//     }

//     for (int i = 0; i < N - 1; i++) {
//         for(int j = i + 1; j < N; j++) {
//             if(tolower(arr[i]) != tolower(arr[j]) && i == 0) {
//                 count++;
//                 continue;
//             } else if (tolower(arr[i]) == tolower(arr[j]) && param){
//                 for(int k = 0; k < ada_huruf; k++) {
//                     if(tolower(arr[i]) == tolower(huruf_sama[k])) {
//                         param = false;
//                         ada = false;
//                         break;
//                     }
//                 }

//                 if(!ada) {} else {
//                     ada_huruf++;
//                     huruf_sama[i] = arr[i];
//                     if(i == 0) {
//                         count++;
//                     } else {
//                         count--; 
//                     }
//                     param = false;
//                 }
//             }
//         }
//         param = true;
//     }

//     printf("%d", count);
//     if(count == 26) {
//         printf("YES");
//     } else {
//         printf("NO");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    int N;
    char arr[105];
    bool hasil[26] = {false};

    scanf("%d", &N);
    scanf("%s", arr);

    if(N < 26) {
        printf("NO");
        return 0;
    }

    for(int i = 0; i < N; i++) {
        int huruf = tolower(arr[i]) - 'a';
        hasil[huruf] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(!hasil[i]) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}