     Problem Link :- https://leetcode.com/problems/set-matrix-zeroes/

// 1. Bruteforce Solution:- 
//   0(m*N) Time complexity  O(m+n ) space complexity  solution

class Solution {
public:
  
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>a(m,1),b(n,1);
        
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==0){
                    a[i]=0;
                    b[j]=0;
            }
            
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(a[i]==0 || b [j]==0)
                    matrix[i][j]=0;
    
    
    }
};


// 2 .  0(M*N) time complexity , 0(1) space solution :- 
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool firstcol=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0) firstcol=1;
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;
            }
        }
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>0;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
              }
         if(firstcol)
             matrix[i][0]=0;
        }
    }