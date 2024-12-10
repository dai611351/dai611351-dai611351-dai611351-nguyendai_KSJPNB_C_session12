#include <stdio.h>
int tongHaiSo(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    int result = tongHaiSo(num1, num2);
    printf("Tong cua hai so la: %d\n", result);

    return 0;
}

