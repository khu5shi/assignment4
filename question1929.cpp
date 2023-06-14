class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //vector<int>ans;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
          nums.push_back(nums[i]);
        }
        

        return nums;
        
    }
};
