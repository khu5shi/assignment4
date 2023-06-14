class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        vector<int>y;
        vector<int>u;
        
        for(int i=0;i<n;i++)
        {
            x.push_back(nums[i]);
        
        for(int j=n+i;j<2*n;j++)
        {
            y.push_back(nums[j]);

        }
        }
        for(int k=0;k<x.size();k++)
        {
            u.push_back(x[k]);
            u.push_back(y[k]);
        }

        return u;
    }
        
    
};
