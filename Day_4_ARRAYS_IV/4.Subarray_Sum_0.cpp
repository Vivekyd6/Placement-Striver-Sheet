1 . Brute-force Approach

 we will generate and check the max length subarray and return that answer.

   int maxLen(vector<int>&a, int n){
    int  max = 0;
	for(int i = 0; i < a.length; ++i){
		int sum = 0;
		for(int j = i; j < a.length; ++j){
			sum += a[j];
			if(sum == 0){
				max = Math.max(max, j-i+1);
			}
		}
	}
	return max;
   }

   TIME COMPLEXITY:- 0(N*N);
   SPACE COMPLEXITY :- 0(1);



   2. Use of haahMap approach


   // { Driver Code Starts
//Initial Template for C++

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
      int res = 0 ;
      unordered_map<int , int >mp;
      mp[0]=-1;
      int sum = 0;
      for(int i=0;i<n;i++){
          sum+=A[i];
          if(mp.find(sum)!=mp.end())
           res = max(res,i-mp[sum]);
          else
          mp[sum]=i;
      }
      
      return res;
    }
};

Time Complexity :- 0(N), 
SPACE COMPLEXITY :- 0(N)