#include<stdio.h>
int main(){
    int m = 10;
    int n,n1;
    n = ++m; // Pre-increment: m is incremented to 11, then assigned to n
    n1 = m++; // Post-increment: n1 is assigned 11, then m is incremented to 12
    n--; // Pre-decrement: n is decremented to 10
    n1--; // Post-decrement: n1 is decremented to 10
    n-=n1; // n = n - n1; => n = 10 - 10 = 0
    printf("Value of n: %d\n",n);
    return 0;
}