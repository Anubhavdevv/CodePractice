//Brute Force Approach 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
              if(nums[i]+nums[j] == target){
                 return {i, j};
              }   
            }
        }
        return {};
    }
};


//Optimal Approach
class Solution {
public:
 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> sum;
    unordered_map<int, int> mp;
    for(int i=0; i<nums.size(); i++)
    {
        if(mp.find(target-nums[i]) != mp.end())
        {
            sum.push_back(i);
            sum.push_back(mp[target-nums[i]]);
            return sum;
        }
        else
            mp[nums[i]] = i;
        }
        return sum;
    } 
};
