// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
   int a,size;
   printf("Enter a number");
    scanf("%d",&a);
    int *p=&a;
//     printf("without addition of  pointer = %zu ",p);
//     //Addition:-
//     p=p+1;
//     printf("\nSize of pointer = %d ",sizeof(1));
//     printf("\nAddition of  pointer = %u ",p);
//     //Subtract:-
//     printf("\n%u this is the address of pomiter p without subtract",p);
//     p=p-1;
//     printf("\n%u this is the address of poniter p after subtract",p);
//     //creating a dynamic Memory
//     p=(int*)malloc(4);
//     if (p == NULL) {
//       printf("\nMemory allocation failed\n");
//       return 1;
//   }
//     scanf("%d",p);
//     printf("%d",*p);
int **q;
q=&p;
printf("\nAddress of a = %u",&a);
printf("\nAddress of p = %u",&p);
printf("\nAddress of q = %u",*q);
    
    return 0;
}