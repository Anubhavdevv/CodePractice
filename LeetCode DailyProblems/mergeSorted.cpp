class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Brute Force 
        for(int i=0;i<n;i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.begin()+m+n);
    }
};


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Two pointer approach
        int i = m-1; 
        int j = n-1;
        int TotalArrangements = m+n-1;
        while(j>=0){
            nums1[TotalArrangements--] = i>=0 && nums1[i]>nums2[j] ?nums1[i--]:nums2[j--];
        }
    }
};
