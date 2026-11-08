class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closestSum = 0;
        int minDiff = INT_MAX;
        for(int i = 0; i < nums.size()-2; i++){
            int curr = nums[i];
            int l = i+1;
            int r = nums.size()-1;
            while(l < r){
                int sum = curr + nums[l] + nums[r];
                if(abs(target - sum) < minDiff){
                    minDiff = abs(target - sum);
                    closestSum = sum;
                }
                if(sum == target){
                    return sum;
                }
                if(sum < target){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return closestSum;
    }
};