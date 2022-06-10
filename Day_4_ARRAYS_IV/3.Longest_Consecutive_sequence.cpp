class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        // solutioin 1 :p Time compexity 0(nlogn) , space= o(1);
//         sort(nums.begin(),nums.end());
     
//         int len=1;
//         int j=1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]+1==nums[i]){
//                 len++;
//                 j=max(len,j);
//             } else if(nums[i-1]==nums[i])
//                 continue;
//             else
//                 len=1;
//         }
//          return !nums.size()?0:j;
        
        // solution 2  using unoredered_set time complexity 0(n)
        unordered_set<int>s;
        for(auto i:nums) s.insert(i);
        int maxlength=1; 
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                 int length=1;
                 int curr=nums[i];
                while(s.find(curr+1)!=s.end()){
                       curr+=1;
                       length+=1;
                }
              maxlength=max(maxlength,length);
          }
        }
         return !nums.size()?0:maxlength;
    }
};