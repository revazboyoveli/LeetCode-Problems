class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){
            string ans = "";
            for(int i = 0; i < s.length(); i += k){
                string curr = s.substr(i, k);

                int num = 0;
                for(int j = 0; j < curr.length(); j++){
                    num += curr[j] - '0';
                }

                ans += std::to_string(num);
            }
            s = ans;
        }
        return s;
    }
};