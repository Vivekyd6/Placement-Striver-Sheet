Problem Link :- https://leetcode.com/problems/majority-element-ii/

1. Naive Approach :- 
  Use two for loops and count the number of occurences of element and that will be yout potential answer.
   
vector<int> majorityElement(vector<int>& nums){
  vector < int > ans;
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == arr[i])
        cnt++;
    }

    if (cnt > (n / 3)) 
      ans.push_back(arr[i]);
  }

  return ans;
}

TIME COMPLEXITY:- 0(N*N);


2. Better Approach :- Use of hash Map.

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int , int>mp;
    vector<int>ans;
    for(auto i:nums) mp[i]++;

    for(auto i:mp){
      if(i.second>n/3) ans.push_back(i.first);
    }

    return ans;
}

TIME COMPLEXITY :- 0(N)
SPACE COMPLEXITY :- 0(N).


3. Optimal Approach:- 
   Upgraded from majority element questions. 
   [Extended Boyer Moore’s Voting Algorithm]
   If we carefully oberserved , then we can conclude , there can't be mpre than 2 majority
    element which exits in the given array.
  so , Here we can use two variables for  this and apply the algorithms.


vector<int> majorityElement(vector<int>& nums) {
      int n1=-1,n2=-1,c1=0,c2=0;
        for(auto i:nums){
            if(i==n1) c1++;
            else if(i==n2) c2++;
            else if(c1==0) n1=i,c1=1;
            else if(c2==0) n2=i,c2=1;
            else c1--,c2--;
        }
        int cnt1=0;
        int cnt2=0;
        vector<int>ans;
        for(auto i:nums)
            if(n1==i) cnt1++;
           else if(n2==i) cnt2++;
        if(cnt1>nums.size()/3) ans.push_back(n1);
        if(cnt2>nums.size()/3) ans.push_back(n2);
        
        return ans;
}

TIME COMPLEXITY :- 0(N) + 0(N),
SPACE COMPLEXITY :0(1)