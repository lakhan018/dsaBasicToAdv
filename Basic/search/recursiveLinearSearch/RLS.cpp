//
// Created by HP on 9/6/2025.
//

#include "RLS.h"
#include<bits/stdc++.h>
using namespace std;
int recursiveLinearSearch(int arr[], int size, int target, int index) {
    // Base case: If we've searched the whole array
    if (index >= size) {
        return -1;
    }
    // Base case: If the current element is the target
    if (arr[index] == target) {
        return index;
    }
    // Recursive step: Search the rest of the array
    return recursiveLinearSearch(arr, size, target, index + 1);
}
int main() {
    int arr[] ={1,2,3,4,5,6,7,};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x=recursiveLinearSearch(arr, size, 14, 0);
    cout<<x<<endl;
}
