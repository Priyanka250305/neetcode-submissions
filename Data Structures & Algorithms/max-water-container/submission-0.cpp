class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        //int ar1=0; int ar2=n;
        int area=0;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            //ar1++;
            for(int j=i; j<n; j++){
                //ar2--;
                area=(min(heights[i], heights[j])*(j-i));
                maxi=max(maxi,area);
            }
        }
        return maxi;
    }
};
