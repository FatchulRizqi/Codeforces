#include <stdio.h>
#include <stdbool.h>

bool arr[500001] = {false};
// long long arr_int[500001] = {0};

int main() {
    long long X, Y, input_dua = 0;
    scanf("%lld %lld", &X, &Y);
    
    int count = 0;
    long long count_print = 0;
    for(int i = 0; i < Y; i++) {
        long long input;
        scanf("%lld", &input);

        if(input == 2) {
            scanf("%lld", &input_dua);
        }
        
        long long param = 0;
        if(input == 1) {
            arr[count] = true;
            count++;
        } else if (input == 2) {
            if(arr[input_dua - 1] == true) {
                arr[input_dua - 1] = false;
            }
        } else if (input == 3) {
            while(true) {
                if(arr[param] == true) {
                    // arr_int[count_print] = param + 1;
                    param++;
                    // count_print++;
                    break;
                } else {
                    param++;
                }
            }
            printf("%lld\n",param);
        }
    }

    // for(int i = 0; i < count_print; i++) {
    //     if(arr_int[i] != 0) {
    //         printf("%lld\n", arr_int[i]);
    //     }
    // }
    return 0;
}