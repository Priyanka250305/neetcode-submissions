class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>> minheap;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        /*for(int i=0;i<k;i++){
            minheap.push(nums[i]);
        }for(int i=k;i<nums.size();i++){
            if(nums[i]>minheap.top()){
                minheap.pop();
                minheap.push(nums[i]);
            }
        }cout<<minheap.top();*/
        for(int x: nums){
            minheap.push(x);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
    }
    
    int add(int val) {
        minheap.push(val);
        if(minheap.size()>k){
            minheap.pop();

        }
        return minheap.top();
    }
};
