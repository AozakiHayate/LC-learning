class Solution {
public:
    string reverseVowels(string s) {
        // 初始化双指针
        int left = 0, right = s.length() - 1;
        // 移动双指针
        while(left < right) {
            // 找到左边的元音
            while(!judge(s[left]) && left < right) {
                left ++;
            }
            // 找到右边的元音
            while(!judge(s[right]) && left < right) {
                right --;
            }
            // 调换
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left ++;
            right --;
        }
        return s;
    }
    
    
    
    // 判断是否是元音
    bool judge(char a) {
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            return true;
        }
        return false;
    }
};
