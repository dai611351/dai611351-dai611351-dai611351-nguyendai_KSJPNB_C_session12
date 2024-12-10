#include <stdio.h>

long long giaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Giai thua khong xac dinh\n");
    } else {
        long long result = giaiThua(n);
        printf("Giai thua cua %d la: %lld\n", n, result);
    }

    return 0;
}

