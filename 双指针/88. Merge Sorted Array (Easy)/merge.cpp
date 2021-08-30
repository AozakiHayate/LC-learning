class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1 = m-1,index2 = n-1;
        int index_m=m+n-1;
        while(index2>=0){
            if(index1<0)nums1[index_m--]=nums1[index2--];
            else if(index2<0)nums1[index_m--]=nums1[index1--];
            else if(nums1[index1]>nums2[index2])nums1[index_m--]=nums1[index1--];
            else nums1[index_m--]=nums2[index2--];
        }


    }
};
