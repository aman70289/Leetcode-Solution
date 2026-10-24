class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                sum=sum+mp.size()*mp.size();
            }
            mp.clear();
        }
        return sum;
    }
};