#include<iostream>
using namespace std;
class Solution {
public:
    bool checkPalindrome(string s, int i, int j ) {
        while(i <= j) {
            if(s[i] != s[j] )
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i<=j) {
            if(s[i] != s[j]) {
                //ek baar i ko remove, ek baar j ko remove
                return checkPalindrome(s,i+1, j) || checkPalindrome(s, i, j-1);
            }
            else {
                //s[i] == s[j]
                i++;
                j--;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    std::string testString1 = "abca";
    std::string testString2 = "racecar";
    
    std::cout << "Is \"" << testString1 << "\" a valid palindrome after removing at most one character? "
              << (solution.validPalindrome(testString1) ? "Yes" : "No") << std::endl;
    
    std::cout << "Is \"" << testString2 << "\" a valid palindrome after removing at most one character? "
              << (solution.validPalindrome(testString2) ? "Yes" : "No") << std::endl;

    return 0;
}