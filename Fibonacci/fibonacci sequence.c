#include<stdio.h>

int main(){
    int fibSequence,sum;
    int a=0, b=1;
    printf("Enter how many Fibonacci sequence: ");
    scanf("%d",&fibSequence);

    for(int i=1; i<=fibSequence; i++){
        printf("%d ", a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}
