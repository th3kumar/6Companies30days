/*
intution
secret and guess ko compare karke, bulls k numbers nikaal lo, 
bakiyo k0 do freq array meh unki counting bhar lo


T.C ==  O(n);
S.C == O(n);

*/


class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size(), bulls = 0, cows = 0;
        vector<int> s(10), g(10);
        for(int i = 0; i < n; i++){
          if(secret[i] == guess[i]) bulls++;
          else {
              s[secret[i]-'0']++;
              g[guess[i] -'0']++;
          }
        }
        for(int i = 0; i < 10; i++) cows += min(s[i], g[i]);
        string ans = "";
        ans += to_string(bulls);
        ans += "A";
        ans += to_string(cows);
        ans += "B";
        return ans;
        
    }
};