#include<stdio.h>
int main(){
    int num,sum=0;
    for(num=1;num<50;num++){
        sum = sum + num;
    }
    printf("Sum of numbers from 1 to 49 is: %d",sum);
    return 0;
}