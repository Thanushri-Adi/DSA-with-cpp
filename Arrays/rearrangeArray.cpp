// Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
//Every consecutive pair of integers have opposite signs.
//For all integers with the same sign, the order in which they were present in nums is preserved.
//The rearranged array begins with a positive integer.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> org(n);
        int posInd = 0;
        int negInd = 1;
    for(int i=0;i<n;i++){
        if(nums[i] < 0){
            org[negInd] = nums[i];
            negInd += 2;
        }else {
            org[posInd] = nums[i];
            posInd += 2;
        }
    }
    return org;
        
    }
};