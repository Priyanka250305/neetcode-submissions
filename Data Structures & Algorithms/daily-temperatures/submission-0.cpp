class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st; vector<int> ans(n,0);
        int count=0;
        for(int i=0; i<n; i++){
            count++;
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;
            }
            st.push(i);
        }
        return ans;
    }
};
