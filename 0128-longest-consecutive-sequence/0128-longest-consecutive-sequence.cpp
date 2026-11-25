class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s;
        for(int n : nums){
            s.insert(n);
        }

        for(int n : s){
            if(!s.contains(n-1)){
                int count = 1;
                while(s.contains(n+1)){
                    count++;
                    n++;
                }
                ans = max(ans, count);
            }
            else{
                continue;
            }
        }

        return ans;
    }
};