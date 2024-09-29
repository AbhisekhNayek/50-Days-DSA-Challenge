class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        
        sort(arr.begin(), arr.end());
        
        while(i<j)
        {
            int pairSum = arr[i]+arr[j];
            if(pairSum<target)
            {
                i++;
            }
            else if(pairSum>target)
            {
                j--;
            }
            else if(pairSum==target)
            {
                return true;
            }
        }
        return false;
    }
};
