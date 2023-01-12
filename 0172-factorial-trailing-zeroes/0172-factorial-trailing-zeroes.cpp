/*

Intution #1

recursion and computation

evaluate factorial 
then, check no. trailing of zeros

T.C = O(n)
S.C = O(1)


int factorial(int n){
    if(n == 0) return 1;
    return n*factorial(n-1);
}
    int trailingZeroes(int n) {
       int res = factorial(n); 
       cout<< res << endl;
       int ans = 0;
       while(res){
           if(res%10 == 0)ans++;
           else break;
           res /= 10;
       } return ans;
    }
--------------------------------------------------------------


multiplication of 5
think


*/


class Solution {
public:
    int trailingZeroes(int n, int res = 0) {
        while (n) n /= 5, res += n;
        return res;
    }
};