class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size()-2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int curr = nums[i];
            int l = i+1;
            int r = nums.size()-1;

            while(l < r){
                int currSum = curr + nums[l] + nums[r];
                if(currSum == 0){
                    vector<int> temp;
                    temp.push_back(curr);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    while(l < r && nums[l] == nums[l+1]){
                        l++;
                    }
                    while(l < r && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(currSum > 0){
                    
                    r--;
                }
                else{
                    
                    l++;
                }
            }
        }
        return ans;
    }
};