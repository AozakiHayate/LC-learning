class Solution {
public:
    string reverseVowels(string s){
        int left = 0 , right = s.length() - 1;
        while(left<right){
            while(!judge(s[left])&&left<right){
                left++;
            }
            while(!judge(s[right])&&left<right){
                right--;
            }
            char tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }
        return s;
    }
        bool judge(char x){
        if(x =='a'||x =='e'||x =='i'||x =='o'||x =='u'||x =='A'||x =='E'||x =='I'||x =='O'||x =='U'){
            return true;
        }
        return false;
    }

};
