 Problem Link :-https://leetcode.com/problems/search-a-2d-matrix/

 1. Brute-force Approach :- 
    Use two for loops and traverse in matrix and if found return true else return false;
    
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
            if(matrix[i][j]==target) return 1;
        }

        return 0;
   }

   TIME COMPLEXITY :- 0(row*column)

2. Binary Search Approach :- 

   As the input array(rows) are  sorted, so that we can easily use the binary search algorithm to solve it.

   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low = 0;
        int high = (row*col)-1;
        int mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            // New row = mid/col && col = mid%col index becomes.
            if(matrix[mid/col][mid%col]==target) return 1;
            if(matrix[mid/col][mid%col]<target) low = mid+1;
            else high = mid-1;
        }
        return 0;
   }

   TIME COMPLEXITY :- 0(log(row*column));


   
       