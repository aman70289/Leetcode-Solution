class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + arr[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int len = j - i + 1;
                if(len % 2 == 1) {
                    int sum = prefix[j] -
                              (i > 0 ? prefix[i-1] : 0);
                    ans += sum;
                }
            }
        }
        return ans;
    }
};