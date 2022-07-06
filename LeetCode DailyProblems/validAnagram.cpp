//USING UNORDERED HASHMAP TO STORE FREQUENCY OF CHARACTER AND UPDATE IT TC- O(N)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, int> mpp;
        for(int i=0; i<s.length(); i++)
            mpp[s[i]]++;
        
        for(int i=0; i<t.length(); i++)
            if(mpp[t[i]] > 0)
                mpp[t[i]]--;
            else
                return false;
        
        return true;
    }
};

//2nd Approach to store frequency in vecore array
class Solution {
public:
    bool isAnagram(string s1, string s2) {
     if(s1.length() != s2.length()){
         return 0;
     }
     vector<int> arr(26);
     for(char c: s1){
         arr[c - 'a']++; //i
     }
     for(char c: s2){
         if(arr[c - 'a'] == 0)
             return 0;
         else
          arr[c - 'a']--; //i
     }
     return 1;
    }
};
