class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    int arr[100000]={0};
    for(int i=0;i<trips.size();i++){
      arr[trips[i][1]]=arr[trips[i][1]]+trips[i][0];
      arr[trips[i][2]]=arr[trips[i][2]]-trips[i][0];
    }
    int ans=arr[0];
    for(int i=1;i<100000;i++){
      arr[i]=arr[i]+arr[i-1];
     ans= max(ans,arr[i]);
    }
    return ans>capacity?false:true;
    }
};