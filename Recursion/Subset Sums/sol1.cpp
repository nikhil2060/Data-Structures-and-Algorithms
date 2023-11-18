//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    int calcSum(vector<int> &temp)
    {
        int sum=0;
        
        for(int i=0;i<temp.size();i++)
        {
            sum+=temp[i];
        }
        
        return sum;
    }

    void helper(vector<int> &arr, int n,vector<int> &ans, vector<int> &temp, int i)
    {
        if(i>=arr.size())
        {
            int x = calcSum(temp);
            ans.push_back(x);
            return;
        }
        
               
        temp.push_back(arr[i]);
        
        helper(arr,n,ans,temp,i+1);
        
        temp.pop_back();
        
        helper(arr,n,ans,temp,i+1);
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        
        vector<int>temp;
        
        helper(arr,N,ans,temp,0);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends