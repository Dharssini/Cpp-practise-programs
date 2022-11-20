#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[] = { 4, 2, 1, 6, -8, 5 };
 
    int *min = std::min_element(std::begin(arr), std::end(arr));
    int *max = std::max_element(std::begin(arr), std::end(arr));
 
    std::cout << "The min element is " << *min << std::endl;
    std::cout << "The max element is " << *max << std::endl;

    return 0;
}