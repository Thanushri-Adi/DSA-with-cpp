// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;
        vector<int> Union;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (Union.empty() || Union.back() != nums1[i]) {
                    Union.push_back(nums1[i]);
                }
                i++;
            } 
            else if (nums1[i] > nums2[j]) {
                if (Union.empty() || Union.back() != nums2[j]) {
                    Union.push_back(nums2[j]);
                }
                j++;
            } 
            else {
                if (Union.empty() || Union.back() != nums1[i]) {
                    Union.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        while (i < n1) {
            if (Union.empty() || Union.back() != nums1[i]) {
                Union.push_back(nums1[i]);
            }
            i++;
        }

        while (j < n2) {
            if (Union.empty() || Union.back() != nums2[j]) {
                Union.push_back(nums2[j]);
            }
            j++;
        }

        return Union;
    }
};
