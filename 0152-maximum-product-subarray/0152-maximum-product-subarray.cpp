class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long leftProduct = 1;
        long long rightProduct = 1;
        long long maxAns = nums[0];
        for(int i = 0; i < n; i++){
            leftProduct = (leftProduct == 0 ? 1 : leftProduct) * nums[i];
            rightProduct = (rightProduct == 0 ? 1 : rightProduct) * nums[n - i - 1];
            maxAns = std::max({maxAns, leftProduct, rightProduct});
        }

        return maxAns;
    }
};