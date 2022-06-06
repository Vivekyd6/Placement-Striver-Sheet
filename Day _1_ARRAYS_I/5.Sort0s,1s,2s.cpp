Question link :- https://leetcode.com/problems/sort-colors/

Approach 1 :- We can use inbuilt c++ stl function to sort this array. 
  TIME COMPLEXITY :- 0(NlogN)

Approach 2 :- We can easily count the occurences of 0,1 and 2 . and 
    in the 2nd iteration just put in the vector . 
  TIME COMPLEXITY :- 0(N+N) , SPACE :- 0(N);


// Better Approach :- Single Traversal and 0(1) space 
// THis problem is based on DUTCH NATIONAL FLAG ALGORITHM.



class Solution {
public:
    void sortColors(vector<int>& nums) {
      int l=0,mid=0,h=nums.size()-1;
       while (mid <= h){
        if (nums[mid] == 0)
            swap(nums[mid++], nums[l++]);
        else if (nums[mid] == 1)
            mid++;
        else 
            swap(nums[mid], nums[h--]);
       } 
    }
};