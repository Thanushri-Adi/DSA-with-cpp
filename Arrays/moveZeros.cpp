// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int x=0; x<n; x++){
            if(nums[x]==0){
                j=x;
                break;
            }
        }
        if(j == -1) return;
        
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        } 
        
    }
};