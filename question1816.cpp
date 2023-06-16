class Solution {
public:
    string truncateSentence(string s, int k) {
         string s2;
            int w=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==' ')
                {
                   w++;
                   if(w==k)
                   {
                     break;
                   }
                }
                 s2 +=s[i];
            }
       return s2;
    }
};
