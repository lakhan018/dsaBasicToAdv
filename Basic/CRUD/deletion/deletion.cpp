// Created by HP on 9/2/2025.
//

#include "deletion.h"
#include <bits/stdc++.h> // Standard/library headers use angle brackets <>

using namespace std; // This should come after all includes

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // deletion using index
    int index=0;
    int size=5;

    if (size>index && index>=0) {
        for (int i=index;i<size;i++) {
            arr[i]=arr[i+1];
        }
        size--;
    }
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    return 0; // It's good practice to return 0 from main
}