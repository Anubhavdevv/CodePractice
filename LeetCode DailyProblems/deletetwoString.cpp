//LCS
class Solution {
public:
    int lcs(string X, string Y, int m, int n)
    {
        int L[m + 1][n + 1];
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (i == 0 || j == 0)
                    L[i][j] = 0;

                else if (X[i - 1] == Y[j - 1])
                    L[i][j] = L[i - 1][j - 1] + 1;

                else
                    L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }

        return L[m][n];
    }
    
    int minDistance(string word1, string word2) {
        
        int  m=word1.length(), n=word2.length();
        int l=lcs(word1, word2, m, n);
        
        return m+n-(2*l);
    }
};

//DP
class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        int m=word1.length(), n=word2.length(); 
        vector<vector<int>> dp(m+1, vector<int> (n+1, 0)); 
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = i+j;
                
                else if(word1[i-1]==word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                
                else
                    dp[i][j] = 1+min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];  
    }
};
