#include <stdio.h>
int isPerfect(int n) {
    if (n <= 1) {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n) ? 1 : 0;
}

void checkAndPrintPerfect(int n) {
    if (isPerfect(n)) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }
}

int main() {
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    checkAndPrintPerfect(num1);
    checkAndPrintPerfect(num2);

    return 0;
}

