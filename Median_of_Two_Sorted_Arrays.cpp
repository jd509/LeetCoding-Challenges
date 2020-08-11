#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined_num;
        
        combined_num.reserve(nums1.size() + nums2.size());
        combined_num.insert(combined_num.end(), nums1.begin(), nums1.end());
        combined_num.insert(combined_num.end(), nums2.begin(), nums2.end());
        std::sort(combined_num.begin(),combined_num.end());
        
        if(combined_num.size()%2 == 0){
            int middle_index = combined_num.size()/2;
            double num1 = combined_num.at(middle_index-1);
            double num2 = combined_num.at(middle_index);
            return (num1+num2)/2;
        }
        else{
            return combined_num.at(((combined_num.size()+1)/2)-1);
        }
        
    }
};