class Solution {
public:
    int candy(vector<int>& ratings) {
        vector <int> candies(ratings.size());
        fill(candies.begin(), candies.end(), 1); //Created array with all elements 1 in it 
                                                 // [1, 1, 1, 1 ... upto n] for each child must                                                  // have one candy 
        //for left neighbours 
        for(int i=1;i<candies.size();i++){
            if(ratings[i]>ratings[i-1]){
                candies[i] = candies[i-1]+1;
            }
        }
        
        //for right neighbours
        for(int i = candies.size()-2;i>=0;i--){  //last 2 children 
            if(ratings[i]>ratings[i+1]){
                candies[i] = max(candies[i], candies[i+1]+1);
            }
        } 
        
        //For total number of candies we will find sum
        int sum = 0;
        for(int i=0;i<candies.size();i++){
            sum+=candies[i];
        }
        return sum;
    }
};
