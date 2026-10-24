class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_val = -1;
        int curr = 0;
        for(int i = arr.size()-1; i >= 0; i--){
            curr = arr[i];
            arr[i] = max_val;
            if(curr > max_val){
                max_val = curr;
            }
        }

        return arr;
    }
};