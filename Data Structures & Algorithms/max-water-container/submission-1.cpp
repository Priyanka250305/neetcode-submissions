class Solution {
public:
    int maxArea(vector<int>& heights) {
        /*int n= heights.size();
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
        return maxi;*/

        int left=0; int right=heights.size()-1;
        int maxi=0;
        int area=0;
        while(left<right){
            area=(min(heights[left],heights[right]))*(right-left);
            maxi=max(maxi,area);
            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }return maxi;
    }
};
