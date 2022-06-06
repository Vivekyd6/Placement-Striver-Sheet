Problem Link :- https://leetcode.com/problems/find-the-duplicate-number/

There are many approach for this . 

1. First sort the array and then iterate over to find the two consecutive number . That will be answer.
   
  int findDuplicate(vector<int>& ans){ 
   sort(ans.begin(),ans.end());
   int res =-1;
   for(int i=0;i<ans.size()-1;i++)
     if(ans[i]==ans[i+1]) {
         break;
        res = ans[i];
     }

    return res;
  }
       Analysis :- NlogN for sorting , N for iteration 
       So, Time complexity :- 0(NlogN + N ) ~ = 0(NlogN);


2. Use the hashing .( you can also use the count vector)
   make an unordered_map to store the frequency of each element . Now whose frequency is not equal to 1 
    or equals to 2 , that will be the answer.

  int findDuplicate(vector<int>& ans){ 
      int res = -1;
      unordered_map<int,int>mp;
      for(auto i:ans) mp[i]++;


      for( auto i:mp){
          if(i.second==1)
          res = i.first;
      }

      return res;
  }

  # Analysis :- Time Complexity :- 0(N) in average case, SPACE COMPLEXITY :- 0(N) 

  3. Cycle Loop Detection algorithm .
     :- If there is an duplicate number present in the given array , then there will be definitely a cycle present . 
     So , here we can take the use of fast and slow pointers .


     int findDuplicate(vector<int>& ans){
         int slow = ans[0];
         int fast = ans[ans[0]];
         while(slow!=fast){
             slow = ans[slow];
             fast = ans[ans[fast]];
         }
         fast = ans[0];
         while(slow!=fast){
            slow = ans[slow];
            fast = ans[fast];
         }

         return slow;
     }

       Time Complexity :- 0(N) space = 0(1).
    

4. There is one more approach :- use of visited number . If duplicate exist , we can easily able to identified it.

     int findDuplicate(vector<int>& ans){
        for(int i = 0; i < ans.size(); i++) {
            // for making 0 based indexing. 
            int index = abs(ans[i]) - 1;
            
            // mark as visited
            ans[index] *= -1;
            // incase of duplicate, this will become +ve 
            if(ans[index] > 0)
                return abs(ans[i]);
        }    
        return -1;
    }


 Time Complexity :- 0(N) space = 0(1).
    


# Thank You .