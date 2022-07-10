//Navie Approach TC: o(n)
vector<int> solve(int n, vector<int> arr){
  //Count Remove Duplicate element from array
  vector <int> nums;
  for(int i=0;i<n;i++){
          if(arr[i]!=arr[i+1]){
              cout << arr[i] << " ";
          }
  }
  return nums;
}



// Method 1 TC: O(n) SC: O(1) 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i]!=nums[i+1]){
              nums[count++] = nums[i+1];
          }
     }
     return count;
    }
};

 
//Method 2 (Constant extra space)  TC: O(n) SC: O(1) 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i]!=nums[i+1]){
              nums[count++] = nums[i];
          }
     }
     nums[count++] = nums[nums.size()-1];   
     return count;
    }
};


 //Count Remove Duplicate element from array
  vector <int> nums;
  int count = 1;
  for(int i=0;i<n-1;i++){
          if(arr[i]!=arr[i+1]){
              arr[count++] = arr[i+1];
          }
  }
  cout << count << endl;
  return nums;


//Best Approach 
Time Complexity : O(NlogN)

Space Complexity : O(N)

void removeDuplicates(int arr[], int n)
{
 
    int i;
 
    // Initialise a set
    // to store the array values
    set<int> s;
 
    // Insert the array elements
    // into the set
    for (i = 0; i < n; i++) {
 
        // insert into set
        s.insert(arr[i]);
    }
 
    set<int>::iterator it;
 
    // Print the array with duplicates removed
    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << ", ";
    cout << '\n';
}
