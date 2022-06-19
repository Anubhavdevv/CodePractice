class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        sort(products.begin(), products.end());
        unordered_map<string, vector<string>> mp;
        for(string &str: products){
            string st = "";
            for(int i=0;i<str.size();i++){
                st.push_back(str[i]);
                if(mp[st].size()<3)
                    mp[st].push_back(str);
            }
        }
        vector<vector<string>> res;
        string substr = "";
        for(int i = 0;i<searchWord.size();i++){
            substr += searchWord[i];
            res.push_back(mp[substr]);
        }
        return res;
    }
};

//Using Map
    sort(products.begin(),products.end());
    
    for(auto x:products)
    {
         string s="";
        for(int i=0;i<x.size();i++)
        {   
            
            s+=x[i];
            if(m[s].size()<3)
            m[s].push_back(x);
        }
    }
    
    vector<vector<string>> ans;
    
    string s="";
    for(int i=0;i<searchword.size();i++)
    {
        s+=searchword[i];
        ans.push_back(m[s]);
    }
    return ans;
}
