#include <stdio.h>
void main()
{
    int i, j;
    // Type 1:-
    //  Question 1:-

    // *
    // **
    // ***
    // ****
    // *****

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 2:-

    // 1
    // 22
    // 333
    // 4444
    // 55555

    // for (i = 1; i < 6; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // Question 3:-

    // 1
    // 12
    // 123
    // 1234
    // 12345

    // for (i = 0; i <= 5; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // Question 4:-

    // 5
    // 44
    // 333
    // 2222
    // 11111

    // for (i = 5; i > 0; i--)
    // {
    //     for (j = 5; j >= i; j--)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // Question 5:-

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE

    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         printf("%c", 'A' + j);
    //     }
    //     printf("\n");
    // }

    // Question 6:-

    // E
    // DD
    // CCC
    // BBBB
    // AAAAA

    // for (i = 5; i > 0; i--)
    // {
    //     for (j = 5; j >= i; j--)
    //     {
    //         printf("%c", 'A' + i - 1);
    //     }
    //     printf("\n");
    // }

    // Type 2:-
    // Question 1:-

    // *****
    // ****
    // ***
    // **
    // *

    // for (i = 5; i > 0; i--)
    // {
    //     for (j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 2:-

    // 12345
    // 1234
    // 123
    // 12
    // 1

    // for (i = 5; i > 0; i--)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // Question 3:-

    //     * 
    //    * * 
    //   * * * 
    //  * * * * 
    // * * * * * 

    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5 - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    // Question 4:-
        //  A
        // ABA
        // ABCBA
        // ABCDCBA
        // ABCDEDCBA
    // for (int i = 1; i <= 5; i++) {
       
    //     for (int j = 1; j <= 5 - i; j++) {
    //         printf(" ");
    //     }
        
    //     for (int k = 0; k < i; k++) {
    //         printf("%c", 'A' + k);
    //     }
        
    //     for (int k = i - 2; k >= 0; k--) {
    //         printf("%c", 'A' + k);
    //     }
        
    //     printf("\n");
    // }

//    second method for above:-
// for ( i = 1; i <=5; i++)
// {
//     for ( j = 5; j > i; j--)
//     {
//        printf(" ");
//     }
    
//    int  k=64;
//     for ( j = 1; j <= i*2-1; j++)
//     {
//         if (j<=i)
//         {
//             printf("%c",++k);
//         }else{
            
//             printf("%c",--k);
//         }
        
//     }
//     printf("\n");
    
// }

for ( i = 0; i < 5; i++)
{
    for ( i = 0; i < 5; i++)
    {
       if (i==1||i==5||j==1||j==5)
       {
       printf("*");
       }else{
        printf(" ");
       }
       
    }
    
    printf("\n");
    
    
}


    
}
