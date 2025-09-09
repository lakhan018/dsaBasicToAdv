//
// Created by HP on 9/7/2025.
//

#include "../InsertSearch.h"
#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
    int searchInsert(vector<int>& nums, int target) {
        return BS(nums,0,nums.size()-1,target);
    }
    int BS(vector<int>&nums,int start,int end,int target){

        int mid=(start+end)/2;
        if(start>end){return end+1;}
        if(nums[mid]==target){return mid;}
        else if (nums[mid]<target){ return BS(nums,mid+1,end,target);}
        else {return BS(nums,start,mid-1,target);}
    }
