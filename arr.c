#include<stdio.h>
int main(){
    int A[7];   // declaration of array
    int B[] = {2,3,4,5,6,7,8};//array initialization 
    int i;
    for(i=0;i<7;i++){
        A[i] = i+1;  // assigning values to array A
    }
    printf("Array A: ");
    for(i=0;i<7;i++){     //printing array A
        printf("%d ",A[i]);
    }
    printf("\nArray B: ");
    for(i=0;i<7;i++){     //printing array B
        printf("%d ",B[i]);
    }
    printf("\n");

    return 0;
}