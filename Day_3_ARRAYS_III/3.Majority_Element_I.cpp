Problem Link :- https://leetcode.com/problems/majority-element/


There are many approaches to this problem .

1. Sorting Method.

   sort the array and return n/2th elements 

  int majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      return nums[nums.size()/2];
  }
   
   TIME COMPLEXITY :- 0(NlogN) 

2. Use of Count Frequency [ HASH MAP ]

  int majorityElement(vector<int>& nums){
    unordered_map<int , int>cnt;
    for(auto i:nums){
        if(cnt[i]++>nums.size()/2) return i;
    }

    return 0;
}
TIME COMPLEXITY :- 0(N),
SPACE COMPLEXITY :- 0(N);


3. Moore Voting Algorithm:- ( MORE OPTIMISED APPROACH )
Approach :- Take every element as a potential majority elements and if same number comes ahead , increase its count and if not decrease it count . 
If at any time count becomes equal to zero , it means current elements is a potential majority candidates.


 int majorityElement(vector<int>& nums) {
        int e=nums[0];
        int cnt=0;
        for(auto i:nums)
        {
            if(cnt==0) e=i;
            if(i==e) cnt++;
            else cnt--;
        }
        return e;
}

TIME COMPLEXITY :- 0(N)
SPACE COMPLEXITY :- 0(1)