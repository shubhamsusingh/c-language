// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
   int a,size;
   printf("Enter a number");
    scanf("%d",&a);
    int *p=&a;
    printf("without addition of  pointer = %zu ",p);
    p=p+1;
    printf("\nSize of pointer = %d ",sizeof(1));
    printf("\nAddition of  pointer = %zu ",p);
    //creating a dynamic Memory
    p=(int*)malloc(4);
    if (p == NULL) {
       printf("\nMemory allocation failed\n");
       return 1;
   }
    scanf("%d",p);
    printf("%d",*p);
    
    return 0;
}