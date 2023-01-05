/*
INTUTTION

two pointer 
t.c = O(n);
s.c = O(1);

*/

class Solution {
public:
    int numberOfSubstrings(string s) {
       int j = 0, i = 0, ans = 0;
        vector<int> v(3,0);
        for(int i = 0; i < s.length(); i++){
            v[s[i] - 'a']++;
            while(j <= i && v[0] > 0 && v[1] > 0 && v[2] > 0){
                 v[s[j] -'a']--;
                ans += (s.length()-i);
                j++;
            }
        } return ans;
    }
};