// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            res = res^nums[i]; //XOR
        }
        return res;
    }
};