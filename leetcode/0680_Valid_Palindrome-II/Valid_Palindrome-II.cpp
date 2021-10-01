class Solution {
public:
    
    bool isPalindrome(string s, int p1, int p2) {
        while(p1 < p2) {
            if(s[p1] == s[p2]) {
                ++p1;
                --p2;
            } else
                return false;
        }
        return true;
    }

	// Time: O(N), Space: O(1)
    bool validPalindrome(string s) {

        int p1 = 0;
        int p2 = s.size() - 1;

        while(p1 < p2) {
            if(s[p1] != s[p2]) {
                
                // Either remove the character in p1 (so move p1 to p1 + 1)
                // or remvoe the character in p2 (so move p2 to p2 - 1)
				// if any of these two cases forms a palindrom, it is still a correct answer
                bool case1 = isPalindrome(s, p1 + 1, p2);
                bool case2 = isPalindrome(s, p1, p2 - 1);
                return case1 || case2;

            } else {
                ++p1;
                --p2;
            }
        }
        return true;
    }
};
