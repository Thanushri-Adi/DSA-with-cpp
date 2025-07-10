//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k =  k % n;
        vector<int> temp(k);

        for(int i=0;i<k;i++){
            temp[i]=nums[i+(n-k)];
        }
        for(int i=n-1;i>=k;i--){
            nums[i] = nums[i-k];
        }
        for(int i=0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};