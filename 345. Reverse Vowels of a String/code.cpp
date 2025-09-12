// Brute Force Approach
// Time Complexity: O(n) (Worse Case N^2)    
// Space Complexity: O(1)

string reverseVowels(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (isVowel(s[i])) {
            // find vowel from the end
            for (int j = n - 1; j > i; j--) {
                if (isVowel(s[j])) {
                    swap(s[i], s[j]);
                    n = j; // shrink search space
                    break;
                }
            }
        }
    }
    return s;
}



// Better Solution 
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    string reverseVowels(string s) {
        string a;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                a += s[i];
            }
        }
        reverse(a.begin(), a.end());
        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                s[i] = a[idx];
                idx++;
            }
        }
        return s;
    }
};


// Optimal Solution (Two Pointer Approach)
// Time Complexity: O(n)
// Space Complexity: O(1)

string reverseVowels(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (isVowel(s[i])) {
            
            for (int j = n - 1; j > i; j--) {
                if (isVowel(s[j])) {
                    swap(s[i], s[j]);
                    n = j; 
                    break;
                }
            }
        }
    }
    return s;
}


