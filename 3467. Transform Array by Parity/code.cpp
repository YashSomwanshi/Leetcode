// Brute Force Solution Time Complexity O(NlogN) Space Complexity O(1)

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};


// Better Solution Time Complexity O(N) Space Complexity O(N) 

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even++;
            } else
                odd++;
        }
        while (even--) {
            ans.push_back(0);
        }
        while (odd--) {
            ans.push_back(1);
        }
        return ans;
    }
};

// Optimal Solution Time Complexity O(N) Space Complexity O(1)

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;
        for (int x : nums) {
            if (x % 2 == 0)
                ++even;
        }
        for (int i = 0; i < even; ++i)
            nums[i] = 0;
        for (int i = even; i < nums.size(); ++i)
            nums[i] = 1;
        return nums;
    }
};