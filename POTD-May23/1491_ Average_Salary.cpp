class Solution {
public:
    double average(vector<int>& arr) {
        
        int min=INT_MAX;
        int min_index=0;
        
        int max=INT_MIN;
        int max_index=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<min){
                min=arr[i];
                min_index=i;
            }
            
            if(arr[i]>max){
                max=arr[i];
                max_index=i;
            }
        }
        
        arr[min_index]=0;
        arr[max_index]=0;
        
        double s1=0;
        for(int i=0;i<arr.size();i++)
        {
            s1+=arr[i];
        }
        
        double rem=arr.size()-2;
        
        double ans= s1/rem;
        
        return ans;
        
    }
};