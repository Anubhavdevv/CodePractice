class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0, st=0, i=0,j=0;
		
		//set to store the elements
        unordered_set<int> sub;
        
        while(j<nums.size()) {
            while(sub.count(nums[j])>0) {
				//Removing the ith element untill we reach the repeating element
                sub.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
			//Add the current element to set and curr_sum value
            sum+=nums[j];
            sub.insert(nums[j++]);
			
			//res variable to keep track of largest curr_sum encountered till now...
            st = max(st, sum);
        }
        return st;
    }
};
