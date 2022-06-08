class Solution {
public:
    //Optimal
    int removePalindromeSub(string s) {
        if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin()))
            return 1;
        return 2;
    }
};

class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0; int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j])
                return 2;
            i++;
            j--;
        }
        return 1;
    }
};
