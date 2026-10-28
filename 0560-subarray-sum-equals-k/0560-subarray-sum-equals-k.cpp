class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int psum=0;
       int count=0;
       for(int i=0;i<nums.size();i++){
            psum+=nums[i];
            int target=psum-k;
            if(mp.find(target)!=mp.end()){
                count+=mp.find(target)->second;
            }
            mp[psum]++;
       }
       return count;
    }
};