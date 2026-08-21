class Solution {
   public:
    string foreignDictionary(vector<string>& words) {
        unordered_map<char, vector<char>> graph;
        unordered_map<char, int> indegree;

        // Initialize indegree of every unique character
        for (string& word : words) {
            for (char c : word) {
                indegree[c] = 0;
            }
        }

        // Build graph
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i + 1];

            int len = min(w1.size(), w2.size());
            bool found = false;

            for (int j = 0; j < len; j++) {
                if (w1[j] != w2[j]) {
                    graph[w1[j]].push_back(w2[j]);
                    indegree[w2[j]]++;
                    found = true;
                    break;
                }
            }

            // Invalid case
            if (!found && w1.size() > w2.size()) return "";
        }

        // Kahn's Algorithm
        queue<char> q;

        for (auto& it : indegree) {
            if (it.second == 0) q.push(it.first);
        }

        string ans;

        while (!q.empty()) {
            char curr = q.front();
            q.pop();

            ans += curr;

            for (char neigh : graph[curr]) {
                indegree[neigh]--;

                if (indegree[neigh] == 0) q.push(neigh);
            }
        }

        if (ans.size() != indegree.size()) return "";

        return ans;
    }
};