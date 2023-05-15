class Solution:
    def reverse(self, x: int) -> int:
        
        if(x>=2147483646 and x<=-2147483648):
            return 0
        
        if x>0:
            s=str(x)
            s=s[::-1]
            s=int(s)
            if s >= 2147483646:
                return 0
            else:
                return s
        elif x==0:
            return 0
        else:
            s=str(x)
            s=s[1:]
            s=s[::-1]
            s='-'+s
            s=int(s)
            if s <= -2147483648:
                return 0
            else:
                return s