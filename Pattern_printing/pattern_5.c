/*
C program to print following pyramid
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
*/
#include<stdio.h>
int main()
{
     int row,col,n;
     n=5;
     for ( row = 1; row < 2*n ; row++)
     {
          int condition= (row>=5)?((2*n)-row):row; /*this part is the optimized I formed the code but using ternery is learnt*/
          for (col = 1; col <= condition ; col++)
          {
               printf("* ");
          }
                       
          printf("\n");
          
     }
     

     

}