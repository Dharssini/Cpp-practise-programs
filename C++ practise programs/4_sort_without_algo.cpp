#include<iostream>
#include <vector>
using namespace std;
int main()
{
     int n;
     cin>>n;
     std::vector< int > arr[n];
     int zero,one,two;
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
     

     for(int i=0;i<n;i++)
     {
          if(arr[i]==0)
          {
               zero+=1;
          }
          else if(arr[i]==1)
          {
               one+=1;
          }
          else
          {
               two+=1;
          }
     }
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }

    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }

    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
     arr.push_back(1);

}