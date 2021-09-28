class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ) {
            return false;
            }
        int rev = 0,tmp=x;
        while(tmp!=0){
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
                return false;
            }
            int digit = tmp % 10;
            tmp /= 10;
            rev = rev *10+digit;
        }
        if (rev == x) return true;
        else return false;
    }
};
