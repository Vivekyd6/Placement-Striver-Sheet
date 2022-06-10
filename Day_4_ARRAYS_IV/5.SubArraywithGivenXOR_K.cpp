1. Brute-force Approach 
  Find all the subarray and find if it is equal to the to given value k and if yes increase the count.

  int solve(vector<int>&A, int k){
    int cnt =0;
    for(int i=0; i<n;i++>){
        int x= 0;
        for(int j=i ; j < n; j++){
            x=x^A[j];
            if(x==k) cnt++;
        }
    }
    return cnt;
  }

  TIME COMPLEXITY :- 0(N*N), 
  SPACE COMPLEXITY :- 0(1);


  2. Optimal Approach :-

   Use of Hash and Prefix xor 
   int solve(vector<int>&A,int k){
    int cnt =0;
    int x=0;
    unordered_map<int , int >mp;
    for(int i=0;i<n; i++){
        x=x^A[i];
        if(x==k) cnt++;
        if(mp.find(x^k)!=mp.end())
        cnt+=mp[x^k];

        mp[x]++;
    }
    return cnt;
   }

   TIME COMPLEXITY :- 0(N);
   SPACE COMPLEXITY :- 0(N).