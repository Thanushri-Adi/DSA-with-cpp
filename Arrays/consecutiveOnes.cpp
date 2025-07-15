//Given a binary array nums, return the maximum number of consecutive 1s in the array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
        int max = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                count++;
            }else{
                count = 0;
            }
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};