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
        
        int maxi=0,j;
        int count=0;
        int c=0;

        for(int i=0;i<s.size();i++)
        {
            count=0;
            c=0;
            j=i;
            while(c<k && j<s.size())
            {
                if(isVowel(s[j]))
                {
                    count++;
                }
                j++;
                c++;
            }

            maxi=max(maxi,count);
        }

        return maxi;
    }
};