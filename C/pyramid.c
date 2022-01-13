#include <stdio.h>

int main() {
    int n = 0;
    printf("숫자를 입력해주세요: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
