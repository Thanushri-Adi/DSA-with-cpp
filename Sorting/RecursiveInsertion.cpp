//Given an array of N integers, write a program to implement the Recursive Insertion sorting algorithm.
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
public:
    void iS(vector<int>& arr, int n, int i){
        if(i==n) return;
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            }
    iS(arr,n,i+1);
    }
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        iS(nums, n,1);
        return nums;
    }
};
