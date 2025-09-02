#include<bits/stdc++.h>
using namespace std;

int main() {
    int size =4; // size decleared to know till where the value is used
    int arr[5]={1,2,3,2};
    int index=1;
    int value =10;
    if (size==index) {
        arr[index]=value;
    }
    else if (size>index) {
        for (int i= size-1;i>=index;i--) {
            arr[i+1]=arr[i];

        }
        arr[index]=value;
    }
    else{cout<<"Error"<<endl;}
    for (int i=0;i<=size;i++) {cout<<arr[i]<<" ";}


}