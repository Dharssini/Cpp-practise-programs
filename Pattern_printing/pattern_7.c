/*
C program to print following pyramid

7.   *****
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
     
     for ( row = 1; row <= n ; row++)
     {
          for (col = 1; col <= n-row+1 ; col++) /*n-row from previous code to n-row+1 because it started from 4*/
          {
               printf("*");/* space to star*/
             
          }
          for(int i=1; i<=row;i++)
          {
               printf(" ");/* star to space*/
          }
          printf("\n");
          
          
     } 


}