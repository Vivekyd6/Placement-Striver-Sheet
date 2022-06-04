 Problem Link :- https://leetcode.com/problems/pascals-triangle/


 // SOlution :- 

 class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
      vector<vector<int>>v;
    
      for(int i=0;i<numRows;i++){
        vector<int>row(i+1,1);
        
        for(int j=1;j<i;j++)
          row[j]=v[i-1][j-1]+v[i-1][j];
      
       v.push_back(row);}
      return v;
    }
  
};

// Iterative solution , Time complexity :- 0(n*n), space solution :- 0(n*n) ( as for generating each row , we need 1D vector and then for whole 2D vector ). 