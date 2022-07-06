class Solution {
public:
  //BINARY SEARCH
    bool isPerfectSquare(int num) {
        int start = 0;
        int end = num;
        bool result = false;
        while(start<=end){
            long long int mid = start+(end-start)/2;
            long long int sqr = mid*mid;
            if(sqr == num){
                result = true;
                return result;
            }
            if(sqr < num)
                start = mid+1;
            else
                end = mid - 1;
        }
        return result;
    }
};
