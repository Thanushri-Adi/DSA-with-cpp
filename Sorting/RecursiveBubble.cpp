//Given an array of N integers, write a program to implement the Recursive Bubble sorting algorithm.
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
public:
    void bS(vector<int>& arr, int n){
          if(n==1) return;
          for(int i=0; i<n-1;i++){
            if (arr[i] > arr[i + 1]) {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
          }
          }
           bS(arr, n-1);
    }
    vector<int> bubbleSort(vector<int>& nums) {
        int n= nums.size();
        bS(nums, n);
      return nums;
    }
};
