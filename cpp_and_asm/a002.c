#include <stdio.h>

extern int min(int a, int b);

int main(void){
    int x = 0, y = 0, m = 0;

    printf("Enter first number  : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    m = min(x, y);

    printf("Minimum number is : %d\n", m);
    return (0);
}
