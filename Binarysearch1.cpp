#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (key > arr[mid]) {
      start = mid + 1;

    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return -1;
}

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int key;
  cout << "Enter the number you want to search: ";
  cin >> key;
  int position = binarysearch(arr, n, key);
  if(position==-1){
    cout<<"The number does not exist in array"<<endl;
  }
  else{cout << "The position of the number is: " << position + 1;}
  /////+1 because index starts from 0 and non coder person it starts from 1
}
