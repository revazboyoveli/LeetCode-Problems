class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        vector<bool> dp(n+1, false);
        dp[n] = true;

        for(int i = n-1; i >= 0; i--){
            for(string& w : wordDict){
                int wLen = w.length();
                if(i + wLen <= n && s.substr(i, wLen) == w){
                    dp[i] = dp[i + wLen];
                }
                if(dp[i]){
                    break;
                }
            }
        }

        return dp[0];
    }
};