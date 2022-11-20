/*
C program to print following pyramid

8.      *
       ***
      *****
     *******
    *********
     
*/
#include<stdio.h>
int main()
{
     int row,col,n,j;
     n=5;
     
     for ( row = 1,j=0; row <= n ; row++,j++)
     {
          for (col = 0; col < n-row ; col++) 
          {
               printf(" ");
          }
          for(int i=1 ; i<=row+j;i++)
          {
               printf("*");
          }
          printf("\n");
          
          
     } 


}