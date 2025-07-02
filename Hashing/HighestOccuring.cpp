//Given an array of n integers, find the most frequent element in it i.e., the element that occurs the maximum 
//number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n= nums.size();
        for(int i:nums){
            freq[i]++;
        }
        int maxEle;
        int maxFreq=0;
        for(auto &i:freq){
            if(i.second > maxFreq){
                maxFreq=i.second;
                maxEle = i.first;
            }else if(i.second == maxFreq && i.first < maxEle) {
        maxEle = i.first;
    }

        }
    return maxEle;
    }
};