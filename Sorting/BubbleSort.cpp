//Given an array of N integers, write a program to implement the Bubble sorting algorithm.
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i = n-1 ; i >= 1 ; i--){
            for(int j=0;j<=i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        return nums;
    }
};
