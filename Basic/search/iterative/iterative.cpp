//
// Created by HP on 9/6/2025.
//

#include "iterative.h"
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,4,5,6,7,8,9};
    int target=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        if (arr[i]==target) {cout<<"index is "<<i;}
    }
}