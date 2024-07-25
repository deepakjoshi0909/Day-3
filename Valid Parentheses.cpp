class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Use stack<char> instead of stack<string>
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if(st.empty()) return false; // Check if the stack is empty before accessing the top element
                
                if((s[i] == ']' && st.top() == '[') || 
                   (s[i] == '}' && st.top() == '{') || 
                   (s[i] == ')' && st.top() == '(')) {
                    st.pop();
                } else {
                    return false; 
                }
            }
        }

        return st.empty(); 
    }
};
