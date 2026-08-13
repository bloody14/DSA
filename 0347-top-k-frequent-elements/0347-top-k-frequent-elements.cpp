class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            
            // store the elements with it's frequency
            mp[nums[i]]++;
            // sort the the map with their frequencies
        }
        vector<pair<int,int>> v; 
       for(auto p:mp){
        v.push_back({p.first, p.second});
       }
       sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });
         vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna