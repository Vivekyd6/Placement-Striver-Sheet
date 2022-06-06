Problem  Link :- https://leetcode.com/problems/maximum-subarray/



Solution 1 :- Brute-force  [TLE]
//   Here we will trying out possible sub-array and find one with max sum . 
//  TIME COMPLEXITY :- 0(N*N) . for both the loops.
  int maxSubarray(vector<int>& nums){
      int n = nums.size();
      int ans = INT_MIN;

      for(int i=0;i<n;i++){
          int current_sum=0;
          for(int j=0;j<n;j++)
          current_sum+=nums[j];
          ans = max(ans,current_sum);
      }

      return ans;
  } 




// We can also this problem using DP( recursion + dp )

// Better Approach :-  Kadane's algorithm (extension of DP approach ). 

   int maxSubArray(int A[], int n) {
        int ans=A[0],i,sum=0;
        for(i=0;i<n;i++){
            sum+=A[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }


