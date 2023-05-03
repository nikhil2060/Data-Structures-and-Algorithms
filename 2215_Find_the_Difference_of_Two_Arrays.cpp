class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        
        
        
        ans=[]
        li1=[]
        li2=[]
        
        
        for i in nums1:
            if i not in nums2 and i not in li1:
                li1.append(i)
                
                
        for i in nums2:
            if i not in nums1 and i not in li2:
                li2.append(i)
                
        ans.append(li1)
        ans.append(li2)
        
        return ans;