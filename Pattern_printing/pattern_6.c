/*
C program to print following pyramid
         *
        **
       ***
      ****
     *****
*/
#include<stdio.h>
int main()
{
     int row,col,n;
     n=5;
     
     for ( row = 1; row <= n ; row++)
     {
          for (col = 1; col <= n-row ; col++)
          {
               printf(" ");
             
          }
          for(int i=1; i<=row;i++)
          {
               printf("*");
          }
          printf("\n");
          
          
     } 


}

/* not a optimized code because everyone on internet used the same code as I used

CODE 1:
 
#include <stdio.h> 
int main() {
    int i, j, rows;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for(i = 0; i < rows; i++){
        
        for(j = 0; j < rows; j++){
            if(j < rows-i-1){
                printf(" ");
            } else {
                printf("*");
            }
        }
           printf("\n");
    }
    return 0;
}

CODE 2:
#include<stdio.h>
  
int main(){
    char *str="*******************";
    int i,j, rows;
     
    printf("Enter the number of rows\n");
    scanf("%d", &rows); 
     
    for(i = 0; i < rows; i++){
       printf("%*.*s\n", rows, i+1, str);
    }
     
    return 0;
}

 */
