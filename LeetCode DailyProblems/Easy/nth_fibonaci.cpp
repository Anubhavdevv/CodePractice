class Solution {
public:
    int tribonacci(int n) {
       if (n <= 0)
         return 0;
       vector<int> ar{0,1,1};
       for(int i=3;i<=n;i++){
         ar[i%3] = ar[0]+ar[1]+ar[2];
       }
       return ar[n%3];
    }
}; 
