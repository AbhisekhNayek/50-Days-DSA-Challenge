class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size() - 1, mid;

        while(start <= end)
        {
            mid = start + (end - start) / 2;

            if(nums[mid] == target)
            {
                return mid;
            }

            // Determine which part is sorted
            if(nums[start] <= nums[mid]) // Left part is sorted
            {
                if(nums[start] <= target && target < nums[mid]) // Target in the left part
                {
                    end = mid - 1;
                }
                else // Target in the right part
                {
                    start = mid + 1;
                }
            }
            else // Right part is sorted
            {
                if(nums[mid] < target && target <= nums[end]) // Target in the right part
                {
                    start = mid + 1;
                }
                else // Target in the left part
                {
                    end = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};
