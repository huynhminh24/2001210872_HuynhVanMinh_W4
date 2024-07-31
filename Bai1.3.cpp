#include <stdio.h>

double sumN(int n)
{
    if (n == 1) {
        return 1.0 / 2.0;
    }
    else {
        return sumN(n - 1) + (double)n / (n + 1);
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Tong bang: %.6f\n", sumN(n));
    return 0;
}
