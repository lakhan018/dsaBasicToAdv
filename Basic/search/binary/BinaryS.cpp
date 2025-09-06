//
// Created by HP on 9/6/2025.
//

#include "BinaryS.h"
#include<bits/stdc++.h>
using namespace std;

int B(int arr[],int s,int e,int t) {
 int mid = (s+e)/2;
 if (arr[mid]==t) {
  cout<<mid<<endl;
 }
 else if (arr[mid]>t) {
  B(arr,s,mid,t);
 }
 else {
  B(arr,mid+1,e,t);
 }

}
int main() {
 //Binary only needs structed data
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int size = sizeof(arr) / sizeof(arr[0]);
 int target=5;
 cout<<B(arr,0,sizeof(arr[0]),target);

}
