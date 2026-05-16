class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row; i++){
            int start = 0;
            int end = col;
            int mid = start + (end - start) / 2;
            while(start <= end){
                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid] < target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
                mid = start + (end - start)/2;
            }
        }
        return false;   
    }
};
