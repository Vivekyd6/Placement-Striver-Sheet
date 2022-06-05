 Problem LINK :-  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


// EASY SOLUTION :_ 
// We just need to find what is the last minimum stock we have buyed and if we sell in future , 
// How much max profit we can make . 

1. Bruteforce solution :- 
   We have 2 nested for loops and and we will maintain a max variable for storing answer.
   TIme complexity :- 0(N*N)
   Space - 0(1);



2. Optimal Solution :- 
  Insted of using two loops , just use one loop and here maintain two variable , 
  one is for mini till that day and 2nd is for finding the maximum .

 class Solution {
 public:
    int maxProfit(vector<int>& prices){
    int minprice=INT_MAX;
    int maxprofit=0;
    for(auto i:prices){
       minprice=min(minprice,i);
       maxprofit=max(maxprofit,i-minprice);
      }
     return maxprofit;  
    }
};