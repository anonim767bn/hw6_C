#include <stdio.h>

int getFibonacci(int n) {
    int previous= 0;
    int current = 1;
    int temp;
    for (int i = 2; i <= n; i++){
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;
}

int main () {
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0) {printf("0\n"); break;}
        printf("%d\n", getFibonacci(n));
    }
    
}