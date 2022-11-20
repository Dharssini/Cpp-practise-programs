#include<iostream>
using namespace std;
int main()
{
     int a[5]={5,2,6,9,7};
     int n=sizeof(a);
     for(int i=n;i<0;i--)
     {
          cout<<a[i];
     }

}
