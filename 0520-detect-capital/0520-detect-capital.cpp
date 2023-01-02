class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        bool ans;
        for(int i = 0; i < word.length(); i++){
           if(isupper(word[i])) count++;
        } (count == word.length() || (count == 1 && isupper(word[0])) || count == 0 ) ? ans = true : ans = false;
           return ans;
    }
};