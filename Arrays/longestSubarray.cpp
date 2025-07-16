// Given an array with all positive elements and a sum k, we need to print the length of the longest subarray that sums to k.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int i=0;
        int sum = 0;
        int maxLen=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
        
        while(i<=j && sum > k){
                sum -= nums[i];
                i++;
            }
            if(sum == k){
                maxLen = max(maxLen,j-i+1);
            }
        }  
        return maxLen;
    }
};
