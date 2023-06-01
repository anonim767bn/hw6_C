#include <stdio.h>

int sumDigits(int * num){
    int sum=0;
    while (*num != 0)
    {
        sum+=*num%10;
        *num /=10;
    }
    return sum;
}

int main () {
    int vvod = 1;
    while (1)
    {
        scanf("%d", &vvod);
        if(vvod == 0){
            printf("0\n");
            break;
        }
        printf("%d\n", sumDigits(&vvod));
        
    }
    
}