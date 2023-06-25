class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        freq={}
        
        for i in range(len(nums)):
            
            if nums[i] not in freq:
                freq[nums[i]]=1
                
            
            else:
                
                freq[nums[i]]+=1
                
        li=list(freq.items())
        

        
        for i in range(len(li)):
            
            if li[i][1]==1:
                return (li[i][0])