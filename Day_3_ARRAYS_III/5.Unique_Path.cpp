Problem Link :- https://leetcode.com/problems/unique-paths/
Best Explaination (@ TAKEUFORWARD)
   https://takeuforward.org/data-structure/grid-unique-paths-count-paths-from-left-top-to-the-right-bottom-of-a-matrix/






DP SOLUTION :- 

class Solution {
public:


    int steps(int x, int y , int m  , int n ){
        // If we are able to reach the end points of the matrix or the path , simply we will bew returning 1 
        if(x==m-1 && y==n-1) return 1 ;
        
        
        if(x>=m && y>=n) return 0;
        // The first one is for , the right one and second one is far , the down one so we need to calculate the both the choices.
        return steps(x+1, y, m,n )+ steps(x, y+1, m , n);
    }



    int solve(int x , int y, vector<vector<int>>& dp){
        if(x<0 || y<0) return 0;
        if(x==0 && y==0) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        int up = solve(x-1,y, dp);
        int left= solve(x,y-1,dp);
        
        return dp[x][y]= up + left;
    }
    int uniquePaths(int m, int n) {
        return steps(0,0 , m , n);
        if(m==1 && n==1 ) return 1;
        vector<vector<int>>dp(m,vector<int>(n,-1));
         solve(m-1,n-1,dp);\
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0 ) dp[0][0]=1;
                else{
                    int left =0 ;
                    int up = 0 ;
                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];
                    dp[i][j]= up+left;
            }
        }
        }
        return dp[m-1][n-1];
        


 vector<int>prev(n,0);
    for(int i=0;i<m;i++){
        vector<int>curr(n,0);
         for(int j=0;j<n;j++){
            if(i==0 && j==0 ) curr[j]=1;
             else{
                    int left =0 ;
                    int up = 0 ;
                if(i>0) up =prev[j];
                if(j>0) left = curr[j-1];
                curr[j] = up+left;
                }
             }
           swap(prev,curr);
        }
    return prev[n-1];
        
        
        
        
        
        
        
        
        
        
        
        
        
//         // Also there is very interesting solution is there , general visulization :- 
//         // As we need to move , total = m-1 + n-1 ways = m+n-2 ways . 
//         // if we are able to find the n-1 or m-1 ways out of total ways , then easily we will be getting the answers. 
//         // m+n-1 C n-1 or m-
//         int total = m+n-2;
//         int a=m-1;
//         double ans=1;
//         for(int i=1;i<=a;i++){
//             ans= ans*(total-a+i)/i;
//         }
//         return (int) ans;
};