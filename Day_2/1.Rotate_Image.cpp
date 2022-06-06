Problem Link :- https://leetcode.com/problems/rotate-image/


Solution :- 

1 . Brute-force Solution 

Approach :- Use a 2D vector array and then store the value as below 

    vector<vector<int>> ans;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        ans[i][n-j-1]=matrix[i][j];
    }
    retrun ans;

 Analysis :- Here There are two nested for loops , so 
             Time Complexity :- 0(N*N) , as well as we are creating another 2D vector to store values
             so , Space Complexity :- 0(N*N);


2 . Optimal Approach :- 

Approach :- Why do not use the property of matrix . 
          So , Here  We can easily reverse the matrix row wise and then swap values along the diagonals .

   1 2 3     3 2 1     3 6 9
   4 5 6  => 6 5 4  => 2 5 8
   7 8 9     9 8 7     1 4 7

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { 
        // Length of matrix. 
        int n = matrix.size();

      // reverse by row wise .
        reverse(matrix.begin(),matrix.end());

       // Do transpose of matrix and then u will finally get your desired answer.
        for(int i=0;i<n;i++)
             for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
    }
};


TIME COMPLEXITY :- Here Reverse will take (N*N ) as well as for transpose , it will take close to (N*N)
                so overall complexity will be 0(N*N)
SPACE COMPLEXITY :- As no extra space is used , so 0(1).




**** Please do not jump directly to answer , Do apply your best knowledge to solve . If not then see the Solution .

HAPPY CODING 