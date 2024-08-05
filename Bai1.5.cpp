#include <stdio.h>

double sumSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Tong bang: %.6f\n", sumSeries(n));
    return 0;
}
