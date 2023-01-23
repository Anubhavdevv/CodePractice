class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mp1;
        for(auto& it: trust){
            mp1[it[1]]++;
            mp1[it[0]]--;
        }
        for(int i=1;i<=n;i++){
            if(mp1[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};
