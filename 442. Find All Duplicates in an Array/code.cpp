// Optimal Solution O(n) time and O(n) space (only for the output array)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
            if (nums[abs(nums[i]) - 1] > 0) {
                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }
};

// Better Solution O(n) time and O(n+n) space

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};
