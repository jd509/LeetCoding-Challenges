#include <iostream>
#include <vector>

//using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        bool pairs = false;
        std::vector<int> pair;
        while(pairs== false){
            for(auto i = 0; i<nums.size(); i++){
                for(auto j = i+1; j< nums.size(); j++){
                    if(nums[i]+nums[j] == target){
                        pair.push_back(i);
                        pair.push_back(j);
                        pairs = true;
                     }
                    else{
                        continue;
                    }
                 }
                if(pairs == true)
                    break;
            
             }

        }
        return pair;
    }
};