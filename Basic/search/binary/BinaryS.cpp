// Created by HP on 9/6/2025.
//
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// // The function needs to pass the array as a pointer (int arr[])
// // and return the result of the recursive calls.
// int binarySearch(int arr[], int start, int end, int target) {
//  // Base Case: If the start index crosses the end index, the element is not found.
//  if (start > end) {
//   return -1; // Sentinel value indicating "not found"
//  }
//
//  int mid = start + (end - start) / 2; // Avoids potential overflow for large arrays
//
//  // If the middle element is the target, return its index.
//  if (arr[mid] == target) {
//   return mid;
//  }
//  // If the target is smaller, search in the left half.
//  else if (arr[mid] > target) {
//   // Return the result of the recursive call.
//   return binarySearch(arr, start, mid - 1, target);
//  }
//  // If the target is larger, search in the right half.
//  else {
//   // Return the result of the recursive call.
//   return binarySearch(arr, mid + 1, end, target);
//  }
// }

int binarySearch(int arr[],int s, int size, int x) {
 size = size - 1;
 if (s>size) return -1;
 int mid = (s+size)/2;
 if (x==arr[mid]) {return mid;}
 else if ( x>arr[mid]){return binarySearch(arr,mid+1,size,x);}
 else {return  binarySearch(arr,s,mid-1,x);}
}

int main() {
 // Binary search only works on sorted data.
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int size = sizeof(arr) / sizeof(arr[0]);
 int target = 5;

 // The initial call should use the last valid index (size - 1).
 int result = binarySearch(arr, 0, size - 1, target);

 if (result != -1) {
  cout << "Element found at index: " << result << endl;
 } else {
  cout << "Element not found in the array." << endl;
 }

 return 0;
}