//Binary Search Approach

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1 || num==4){
            return true;
        }
        
        int start=0;
        int end=num;
        
        while(start<=end)
        {
            long long int mid= (start+end)/2;
            
            if(mid*mid==num){
                return true;
            }
            else if(mid*mid>num){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return false;
    }
};