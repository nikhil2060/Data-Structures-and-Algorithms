class Solution {
public:

    bool isVowel(char l)
    {
        if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int maxVowels(string s, int k) {
        
        int maxi=0,i,j;
        int count=0;
        int n=s.size();
        
        for(i=0;i<k;i++)
        {
            if(isVowel(s[i]))
                {
                    count++;
                }
        }
        
        maxi=max(maxi,count);
    
        
        i=0;
        j=k-1;

        while(j<n) 
        {
            j++;
            if(isVowel(s[j]))
            {
                count++;
            }
            
            if(isVowel(s[i]))
            {
                count--;   
            }
               
            i++;
            
            maxi=max(maxi,count);
        
        }

        return maxi;
    }
};