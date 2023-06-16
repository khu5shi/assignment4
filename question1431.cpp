class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool>v;
        int s=0,max;
        max=candies[0];
        for(int k=1;k<candies.size();k++)
        {
            if(candies[k]>max)
            {
                max=candies[k];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            s=candies[i]+extraCandies;
           
                if(s>max||s==max)
                {
                    v.push_back(true);
                }
                else
                {
                    v.push_back(false);
                }
             s=0;
        }
        return v;
        
        
    }
};
