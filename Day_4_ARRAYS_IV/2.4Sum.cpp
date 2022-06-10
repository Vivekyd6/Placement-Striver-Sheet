class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()<4) return ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int target3=target-nums[i];
            for(int j=i+1;j<n;j++){
                int target2=target3-nums[j];
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int sum=nums[l]+nums[r];
                    if(sum<target2) l++;
                    else if(sum>target2) r--;
                    else{
                        vector<int>res(4,0);
                        res[0]=nums[i],res[1]=nums[j],res[2]=nums[l],res[3]=nums[r];
                        ans.push_back(res);
                        
                    while(l<r && nums[l]==res[2]) ++l; //
                    while(l<r && nums[r]==res[3]) --r;
                    }
                }
                while(j<n-2 && nums[j+1]==nums[j]) j++;
            }
            while(i<n-3 && nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};