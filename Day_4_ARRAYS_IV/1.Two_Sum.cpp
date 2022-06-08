Problem Link :- https://leetcode.com/problems/two-sum/


1. Use two for loops for finding the target

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 res.emplace_back(i);
   			 res.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (res.size() == 2)
   		 break;
    }
    return res;
} 


TIME COMPLEXITY :- 0(N*N)


2. We can use here two pointer approach to reduce time complexity to 0(NLogN);
   sort the given array .

  class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>ans,nums;
        nums=num;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int n1=0;
        int n2=0;
        while(i<j){
            if(nums[i]+nums[j]==target){
                n1= nums[i];
                n2 = nums[j];
                break;
            }
            else if(nums[i]+nums[j]>target)
                j--;
            else i++;
        }
        
        for(int i=0;i<num.size();i++){
            if(num[i]==n1) ans.emplace_back(i);
            else if(num[i]==n2) ans.emplace_back(i);
        }
        return ans;
    }
};


3. Hash Map Solution :- 
   Here we can push the element in the map and find for (target - element) , if found that will be our answer.

    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<num.size();i++){
            if(mp.find(target-num[i])!=mp.end()){
                return {i,mp[target-num[i]]};
            }
            else mp[num[i]]=i;
        }
        return {-1,-1};
    }
    TIME COMPLEXITY :- 0(N)
    SPACE COMPLEXITY :- 0(N).