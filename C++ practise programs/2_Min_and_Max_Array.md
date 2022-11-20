# Find Maximum and Minimum element in an array

## What the problem is?
To find the maximum and minimum element from the given array 

## Basic understanding:
going to create a function, find edge cases

### Brute Force Approach:

``` #include<iostream>
using namespace std;
int main()
{
  int arr[] = {4,8,9,65,5,2,1,45};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max = arr[0];
  int min = arr[0];
  for(int i=0;i<=(n-1);i++)
    {
      if (arr[i]>max)
      {
        max = arr[i];
      }
      if(arr[i]<min)
      {
        min = arr[i];
      }      
    }

  cout<<"maximum :"<<max<<" \n";
  cout<<"minimum :"<<min<<" \n";
  
  return 0;
} 
```

