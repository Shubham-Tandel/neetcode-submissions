class Solution {
    public boolean isValid(String s) {
        int len = s.length();
        Stack<Character> stack = new Stack<>();

        for(int i = 0; i < len; i++){
            if(s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[' ){
                stack.push(s.charAt(i));
            }

            else{
                if (stack.isEmpty()) return false;

                char top = stack.pop();
                if(s.charAt(i) == ')' && top != '('){
                    return false;
                }
                else if(s.charAt(i) == '}' && top != '{'){
                    return false;
                }
                else if(s.charAt(i) == ']' && top != '['){
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}
