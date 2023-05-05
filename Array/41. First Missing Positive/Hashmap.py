class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        
        nums.sort();
        
        hmap={}
        
        for i in nums:
            
            if i not in hmap:
                hmap[i]=i
            else:
                hmap[i]+=1
                
        i=1
        
        while i:    
        
            if not i in hmap:
                return i
            
            i+=1
        
        return 0;