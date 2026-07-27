class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for (int i = 0; i < stones.size(); i++) {
            maxheap.push(stones[i]);
        }
        while (maxheap.size() > 1) {
            int a = maxheap.top();
            maxheap.pop();
            int b = maxheap.top();
            maxheap.pop();
            if (a - b != 0) {
                maxheap.push(a - b);
            }
        }
        if (maxheap.empty()) return 0;
        return maxheap.top();
    }
};
