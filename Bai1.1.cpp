#include <stdio.h>

int sumN(int n)
{
    if (n == 1) {
        return 1;
    }
    else {
        return n + sumN(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Tong bang: %d\n", sumN(n));
    return 0;
}
