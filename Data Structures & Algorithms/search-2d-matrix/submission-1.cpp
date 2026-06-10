class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = 0;
        int rows = matrix.size();

        while(row < rows){

            int end = matrix[0].size()-1;

            if(matrix[row][end] >= target){

                int st = 0;
                int en = end;

                while(st <= en){

                    int mid = st + (en - st)/2;

                    if(matrix[row][mid] == target)
                        return true;

                    else if(matrix[row][mid] < target)
                        st = mid + 1;

                    else
                        en = mid - 1;
                }

                return false;
            }

            row++;
        }

        return false;
    }
};