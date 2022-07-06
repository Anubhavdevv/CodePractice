class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       // Naive apprach would be of sort the array and find the next iteration and return it
       //With hashset
        set<int> store;
        for(int n: nums){
            store.insert(n);
        }
        int streak = 0;
        for(int n: nums){
            if(!store.count(n-1)){
                int curN = n;
                int curStreak = 1;
                while(store.count(curN+1)){
                    curN += 1;
                    curStreak += 1;
                }
                streak = max(streak, curStreak);
            }
            
        }
        return streak;
    }
};
