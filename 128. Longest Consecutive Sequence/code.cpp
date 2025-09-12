// Optimal Solution
// Time Complexity: O(N) & Space Complexity: O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        int longest=1;
        if(n==0)return 0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int c=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    c++;
                    x++;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};


// Brute Force Solution
// Time Complexity: O(NlogN) & Space Complexity: O(1)

class BruteForceSolution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1, count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue; 
            if (nums[i] == nums[i-1] + 1) {
                count++;
            } else {
                count = 1;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};