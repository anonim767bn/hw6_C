#include <stdio.h>

int sumDigits(int * num){
    int sum=0;
    while (num != 0)
    {
        sum+=*num%10;
        *num /=10;
    }
    return sum;
}

int main () {
    int vvod = 1;
    while (vvod != 0)
    {
        scanf("%d", &vvod);
        printf("%d\n", sumDigits(&vvod));
    }
    
}