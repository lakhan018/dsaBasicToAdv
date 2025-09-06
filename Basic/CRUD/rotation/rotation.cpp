//
// Created by HP on 9/2/2025.
//

#include "rotation.h"
#include<bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"helo";
    int arr[]={1,2,3,4,5};
    int v=16;
    int arr1[sizeof(arr)/sizeof(int)+1]={0};
    int count=0;
    v=v%sizeof(arr[0]);
    for(int i=v;i<=sizeof(arr[0]);i++) {
            arr1[count]=arr[i];
            count++;
            cout<<arr[i]<<" ";
    }
    for (int i=0;i<v;i++) {
        arr1[count]=arr[i];
        count++;
        cout<<arr[i]<<" ";
        // cout<<endl;
    }
        cout<<endl;

    for (int i=0;i<=sizeof(arr1[0]);i++) {
        cout<<arr1[i]<<" ";
    }
}