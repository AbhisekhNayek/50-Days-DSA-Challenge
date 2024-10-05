class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        set<vector<int>> res;

        sort(nums.begin(), nums.end());
        int target=0;

        for(int i=0;i<nums.size();i++)
        {
            int low = i+1;
            int high = nums.size()-1;

            while(low<high)
            {
                int sum = nums[i]+nums[low]+nums[high];
                if(sum==target)
                {
                    res.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
                else if(sum<target){
                    low++;
                }
                else{
                    high--;
                }
            }
        }

        for( auto it : res)
        {
            output.push_back(it);
        }
        return output;
    }
};
