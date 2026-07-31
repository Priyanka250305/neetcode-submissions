class Solution {
   public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && c == '}' && st.top() == '{') {
                st.pop();
            }
            else if (!st.empty() && c == ']' && st.top() == '[') {
                st.pop();
            }
            else if (!st.empty() && c == ')' && st.top() == '(') {
                st.pop();
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
