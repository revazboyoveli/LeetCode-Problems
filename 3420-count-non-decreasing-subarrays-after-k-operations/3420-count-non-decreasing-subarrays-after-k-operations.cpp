class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        long long cost = 0;
        int n = nums.size();

        vector<int> st;
        int head = 0;

        for(int i = n-1, j = n-1; i>= 0; i--){
            while(st.size() > head && nums[st.back()] < nums[i]){
                int l = st.back();
                st.pop_back();
                int r = (st.size() == head) ? j+1 : st.back();
                cost += 1LL * (r-l) * (nums[i] - nums[l]);
            }
            st.push_back(i);
            while(cost > k){
                cost -= 1LL * (nums[st[head]] - nums[j]);
                if(st[head]==j){
                    head++;
                }
                j--;
            }
            ans += (j-i + 1);
        }

        return ans;
    }
};