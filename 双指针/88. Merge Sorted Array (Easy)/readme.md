Input:
nums1 = [1,2,3,0,0,0], m = 3  

nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]


题目描述：把归并结果存到第一个数组上。

需要从尾开始遍历，否则在 nums1 上归并得到的值会覆盖还未进行归并比较的值。
