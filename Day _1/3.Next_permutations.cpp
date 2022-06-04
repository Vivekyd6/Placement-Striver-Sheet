 Problem  Link :-  https://leetcode.com/problems/next-permutation/



 /*  Brtueforce solution :- 
   Finding all the permutation and store the result in 2d vector and then iterate over and find the next permutation from it .
   Time complexity :- 0(n!*n) whereas n is the for the permutation and searching for the desired permutation tales n .

  2. C++ inbuilt function :- 
  

     next_permutation(ans,ans+ans.size());

//Optimal Solution :- 

Here we will get advantage of the lexigraphically permutation of array . 

*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       
        int n = nums.size();
        int i;
        int j; 
        
        for(i=n-2;i>=0;i--){
             if(nums[i]<nums[i+1])
                 break;
            }
        if(i<0) reverse(nums.begin(),nums.end());
        else{
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i])
                    break;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
