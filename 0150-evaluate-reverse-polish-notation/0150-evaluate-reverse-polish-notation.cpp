class Solution {
public:
    bool isOperator(string s){
        return s.length() == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/');
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string token : tokens){
            if(isOperator(token)){
                int n2 = s.top();
                s.pop();
                int n1 = s.top();
                s.pop();

                int curr = 0;
                if(token[0] == '+'){
                    curr = n1 + n2;
                }
                else if(token[0] == '-'){
                    curr = n1 - n2;
                }
                else if(token[0] == '*'){
                    curr = n1 * n2;
                }
                else if(token[0] == '/'){
                    curr = n1 / n2;
                }
                s.push(curr);
            }
            else{
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};