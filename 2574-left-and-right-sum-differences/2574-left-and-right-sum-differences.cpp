class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ssum(n,0);
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ssum[i]=i==0?nums[i]:nums[i]+ssum[i-1];
        }
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum=sum+nums[i];
            ans[i]=abs(ssum[i]-sum);
        }
        return ans;
    }
};