#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int *A = (int*)malloc(n*sizeof(int)); // dynamically allocated array
    // int *A = (int*)calloc(n, sizeof(int)); This works the same as malloc but if we try to run and print only A[i] then calloc will initialize the values to 0 but with malloc the values will be some garbage value.

    // free(A); this will release the memory.


    // int *B = (int*)realloc(A, 2*n*sizeof(int)); this is reallocating memory block. such cases will be useful when we want to increase the size of the memory block.

    // printf("prev block address = %d, new address = %d\n", A, B);

    for(int i = 0; i<n; i++)
    {
        A[i] = i+1;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }

}