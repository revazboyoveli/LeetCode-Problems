class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);

        int max_len = 0;
        int left = 0;
        int max_freq = 0;

        for(int right = 0; right < s.length(); right++){
            int char_index = s[right] - 'A';
            count[char_index]++;

            max_freq = max(max_freq, count[char_index]);

            if((right-left+1) - max_freq > k){
                count[s[left]-'A']--;
                left++;
            }

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};