#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    float fx, fy;
    
    scanf("%d %d", &x, &y);
    scanf("%f %f", &fx, &fy);
    
    printf("%d %d\n", x + y, x - y);
    printf("%.1f %.1f", fx + fy, fx - fy);
    
    return 0;
}
