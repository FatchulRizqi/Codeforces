#include <stdio.h>

int main() {    
    long long arr[4];
    int point = 0, count = 0;

    for(int i = 0; i < 4; i++) {
        scanf("%lld", &arr[i]);
    }

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j <= 3; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > point) {
            point = count;
        } else if(count == point && count != 0) {
            point = 2;
            break;
        } 

        count = 0;
    }

    printf("%d", point);

    return 0;   
}