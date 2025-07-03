//Given an array of N integers, write a program to implement the Insertion sorting algorithm.
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
public:
    vector<int> InsertionSort(vector<int>& nums){
        int n=nums.size();
        for(int i=1;i<n;i++){
            int j=i;
            while(j>0 && nums[j-1]>nums[j]){
                int temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                j--;
            }
        }
        return nums;
    }
};