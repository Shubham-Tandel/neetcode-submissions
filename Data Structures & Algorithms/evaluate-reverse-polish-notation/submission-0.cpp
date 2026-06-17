class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(auto n : tokens){
            if(n != "+" && n != "-" && n != "*" && n != "/"){
                int num = stoi(n);
                stk.push(num);
            }
            else{
                if(n == "+"){
                    int n2 = stk.top();
                    stk.pop();
                    int n1 = stk.top();
                    stk.pop();
                    stk.push(n1+n2);
                }
                else if(n == "-"){
                    int n2 = stk.top();
                    stk.pop();
                    int n1 = stk.top();
                    stk.pop();
                    stk.push(n1-n2);
                }
                else if(n == "*"){
                    int n2 = stk.top();
                    stk.pop();
                    int n1 = stk.top();
                    stk.pop();
                    stk.push(n1*n2);
                }
                else if(n == "/"){
                    int n2 = stk.top();
                    stk.pop();
                    int n1 = stk.top();
                    stk.pop();
                    stk.push(n1/n2);
                }
            }
        }
        return stk.top();
    }
};
