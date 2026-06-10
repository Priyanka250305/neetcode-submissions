class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0; int st=0;
        int endMat=matrix.size()-1;//m
        int end=matrix[0].size()-1;//n
        while(start<=endMat){
            if(matrix[start][end]>=target){
                while(st<=end){int mid=st+(end-st)/2;
                if(target==matrix[start][mid]) return true;
                else if(target>matrix[start][mid]) st=mid+1;
                else end=mid-1;
                }
            }else{
                start++;
            }
        }
        return false;
    }
};
