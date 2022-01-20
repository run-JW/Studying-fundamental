#include <stdio.h>

int sum(int num1, int num2) {
    int sum = num1 + num2;

    return sum;
}

int main() {
    int result = sum(1, 2);

    printf("%d", result);

    return 0;
}
