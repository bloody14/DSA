class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

    for(char c : s) {
        if(isalnum(c)) {
            clean += tolower(c);
        }
    }
    int left = 0;
    int right = clean.size() - 1;

    while(left < right) {

        if(clean[left] != clean[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna