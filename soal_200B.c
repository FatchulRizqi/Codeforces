#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double p;
        scanf("%lf", &p);
        sum += p;
    }

    double ans = sum / n;

    printf("%.12lf\n", ans);

    return 0;
}