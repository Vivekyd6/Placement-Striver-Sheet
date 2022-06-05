 Problem LINK :-  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


// EASY SOLUTION :_ 
// We just need to find what is the last minimum stock we have buyed and if we sell in future , 
// How much max profit we can make . 


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