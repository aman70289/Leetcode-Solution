class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    int N=ranges.size();
    int arr[100001]={0};
    for(int i=0;i<N;i++){
      arr[ranges[i][0]]++;
      arr[ranges[i][1]+1]--;
      
    }
    int sum=0;
    for(int i=0;i<100001;i++){
       sum=sum+arr[i];
      if((sum==0&&i>=left&&i<=right))return false;
    }
    return true;
    }
};