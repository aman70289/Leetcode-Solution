class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>psumf(n);
        vector<int>psumb(n);
        for(int i=0;i<nums.size();i++){
            if(i==0)psumf[0]=nums[0];
            else{psumf[i]=psumf[i-1]+nums[i];}
        }    
        for(int i=n-1;i>=0;i--){
            if(i==n-1)psumb[i]=nums[i];
            else{psumb[i]=psumb[i+1]+nums[i];}
        }
        for(int i=0;i<n;i++){
            int left=(i==0)?0:psumf[i-1];
            int right=(i==n-1)?0:psumb[i+1];
            if(left==right)return i;
        }
        return -1;
    }
};