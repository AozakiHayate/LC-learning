class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=0,right=letters.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(letters[mid]>target)right=mid;
            else left=mid+1;
        }
        if(letters[left]<=target)return letters[0];
        return letters[left];
    }
};







