/*
C program to print following pyramid
    *****
    ****
    ***
    **
    *
*/
#include<stdio.h>
int main()
{
     int i,j,n;
     n=5;
     for ( i = 1; i <= n; i++)
     {
          for (j = i; j <= n ; j++)
          {
               printf("* ");
          }

          printf("\n");
          
     }
     

}