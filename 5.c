#include <stdio.h>

int ispolnitel(int num){
    int pr1 = (num/100)*((num/10)%10);
    int pr2 = (num%10) * ((num/10)%10);
    return pr1>pr2 ? (pr2<10 ? pr1*10+pr2 : pr1*100+pr2) : (pr1<10 ? pr2*10 + pr1 : pr2 * 100 + pr1);
}

int main() {
    int n;
    while (1)
    {
        scanf("%d", &n);
        if(n>999 || n<100){
            printf("неверные входные данные\n");
            break;
        }
        printf("%d\n", ispolnitel(n));
    }
}