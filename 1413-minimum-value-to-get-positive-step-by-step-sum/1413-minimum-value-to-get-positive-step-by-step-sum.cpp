class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int mn=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            mn=min(mn,sum);
        }
        return abs(mn)+1;

    }
};