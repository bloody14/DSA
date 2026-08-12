class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st;
        vector<int> ans;

        // Store all elements of nums1
        for(int i = 0; i < nums1.size(); i++) {
            st.insert(nums1[i]);
        }

        // Check which elements of nums2 exist in the set
        for(int i = 0; i < nums2.size(); i++) {

            if(st.find(nums2[i]) != st.end()) {
                ans.push_back(nums2[i]);

                // Remove it so we don't add duplicates
                st.erase(nums2[i]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna