#include <iostream>
using namespace std;

// initialize array
int arr[] = {20, 34, 5, 8, 1, 78};

// size of the array
int size_array = sizeof(arr) / sizeof(arr[0]);

void reverseArr(int arr[], int num) {
  // check the size of array
  if (num == size_array)
    return;
  // extract array elements
  int elem = arr[num];
  // recursively calls the next element of the array
  reverseArr(arr, num + 1);
  // assigning elements
  arr[size_array - num - 1] = elem;
}

int main() {
  int i;
  // call recursive function (start from first elements
  cout << " Original elements of the arrays " << endl;
  for (int i = 0; i < size_array; i++) {
    cout << arr[i] << " ";
  }

  reverseArr(arr, 0);
  cout << " \n Reverse elements of the array are: " << endl;
  // display the array elements
  for (int i = 0; i < size_array; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}