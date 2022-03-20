#include <stdio.h>

int max_of_four(a, b, c, d) {
    int arr[4] = {a, b, c, d};
    int result = 0;
    
    for (int i = 0; i < 4; i++) {
        if (result < arr[i]) {
            result = arr[i];
        }
    }
    
    return result;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
