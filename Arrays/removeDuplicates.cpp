// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[i] == nums[j]){
            }else{
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};