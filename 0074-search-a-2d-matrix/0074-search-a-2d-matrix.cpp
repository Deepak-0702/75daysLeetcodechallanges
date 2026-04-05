class Solution {
public:
bool searchInRow(int sRow,vector<vector<int>>&matrix,int target){
    int n=matrix[0].size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(matrix[sRow][mid]==target){
            return true;
        }
        if(matrix[sRow][mid]<=target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        //first we apply binary search on row 
        int sRow=0,eRow=m-1;
        while(sRow<=eRow){
            int mid=sRow+(eRow-sRow)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                return searchInRow(mid,matrix,target);
            }
            else if(target>=matrix[mid][n-1]){
                sRow=mid+1;
            }
            else{
                eRow=mid-1;
            }
        }
        return false;
    }
};