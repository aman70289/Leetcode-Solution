class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int X) {
        map<int,pair<int,int>> mp;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]].first++;
            mp[arr[i]].second=i;
        }
        vector<int>ans;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]].first--;
            if(mp[arr[i]].first==0)mp.erase(arr[i]);
            auto it = mp.find(X - arr[i]);
            if(it != mp.end())
               { ans.push_back(i);
                ans.push_back(it->second.second);
                break;}
        }
        return ans;
    }
};