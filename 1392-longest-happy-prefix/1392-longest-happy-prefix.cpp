/*
Intution

the KMP preprocessing is used here,
where we check largest prefix that is also a suffix,

for string s = " L E V E L"
    vector v =   0 0 0 0 1
                 | |
                 j i

    vector<int> lp(word.length(), 0);
        
        int index = 0;
        for(int i = 1; i < word.length();)
        {
            if(word[i] == word[index])
            {
                index++;
                lp[i] = index;
                i++;
            }
            else
            {
                if(index != 0)
                    index = lp[index-1];
                else
                    i++;
            }
        }
        

        T.C = O(n);
        S.c = O(n);


   


*/
class Solution {
public:
    vector<int> lps(string& word)
    {
        vector<int> lp(word.length(), 0);
        
        int index = 0;
        for(int i = 1; i < word.length();)
        {
            if(word[i] == word[index])
            {
                index++;
                lp[i] = index;
                i++;
            }
            else
            {
                if(index != 0)
                    index = lp[index-1];
                else
                    i++;
            }
        }
        
        return lp;
    }
    
    string longestPrefix(string s) {
        vector<int> lp = lps(s);
        
        return s.substr(0, lp.back());
    }
};