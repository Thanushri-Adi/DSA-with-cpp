//Given an array of N integers, write a program to implement the Quick sorting algorithm.

#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int i=low;
        int j=high;
        int pivot=arr[low];
        while(i<j){
           while (i <= high && arr[i] <= pivot) i++;
           while (j >= low && arr[j] > pivot) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;

    }
      void qS(vector<int>& arr, int low, int high) {
        if(low<high){
        int pivot = partition(arr, low, high);
        qS(arr,low,pivot-1);
        qS(arr,pivot+1,high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        int n=nums.size();
        qS(nums, 0 , n-1);
    return nums;
    }
};
