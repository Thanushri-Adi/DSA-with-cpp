// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
		  int n=nums.size();
          for(int i=1;i<n-1;i++){
            if(nums[i] > nums[i-1]){
        } else {
            return false;
          }
        }
        return true;
		}
};