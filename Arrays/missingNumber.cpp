// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive),
// return the only number missing from the array within this range.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1 = 0;
        int xor2 = 0;
        for(int i=0;i<n;i++){
            xor1 = xor1 ^ (i+1);
            xor2 = xor2 ^ nums[i];
        }
        return xor1 ^ xor2;
    }
};