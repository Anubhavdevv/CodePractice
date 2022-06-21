#1462
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        multiset<int> climb;

        for(int i=1;i<heights.size();i++){
            if(heights[i]-heights[i-1]>0){
                climb.insert(heights[i]-heights[i-1]);
            }
            if(climb.size()>ladders){
                bricks -= *climb.begin();
                climb.erase(climb.begin());
                if(bricks<0)
                   return i-1;
                
            }
        }
        return heights.size()-1;
    }
};
