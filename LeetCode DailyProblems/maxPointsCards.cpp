class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int count = 0;
		
        for(int i=0;i<k;i++) 
            count+=cardPoints[i];
        
        int curr=count;
        for(int i=k-1;i>=0;i--) {
            curr-=cardPoints[i];
            curr+=cardPoints[cardPoints.size()-k+i];
			count = max(count, curr);
        }
        
        return count;
    }
};
