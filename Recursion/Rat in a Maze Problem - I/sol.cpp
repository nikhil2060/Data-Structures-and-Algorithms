//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    bool checkValidator(vector<vector<int>> &MAT, int length, int x, int y)
    {
        if(x<0 || y<0 || x>=length || y >=length || MAT [x][y] == 0) return false;
        
        return true;
    }
    
    
    void helper(vector<vector<int>> &MAT, vector<string>&ans ,int n,int x, int y, string &tempPath)
    {
        if(x==n-1 && y==n-1)
        {
            ans.push_back(tempPath);
            return;
        }
        
         if(checkValidator(MAT,n, x+1 , y)) //Down
        {
            tempPath+='D';
            int temp =MAT[x][y];
            MAT[x][y] = 0;
            helper(MAT,ans,n,x+1,y,tempPath);
            MAT[x][y] = temp;
            tempPath.pop_back();
        }
        
        if(checkValidator(MAT,n, x , y-1)) //Left
        {
            tempPath+='L';
            int temp =MAT[x][y];
            MAT[x][y] = 0;
            helper(MAT,ans,n,x,y-1,tempPath);
            MAT[x][y] = temp;
            tempPath.pop_back();
        }
        
        if(checkValidator(MAT,n, x , y+1)) //Right
        {
            tempPath+='R';
            int temp =MAT[x][y];
            MAT[x][y] = 0;
            helper(MAT,ans,n,x,y+1,tempPath);
            MAT[x][y] = temp;
            tempPath.pop_back();
        }
        
       
        if(checkValidator(MAT,n, x-1 , y)) //UP
        {
            tempPath+='U';
            int temp =MAT[x][y];
            MAT[x][y] = 0;
            helper(MAT,ans,n,x-1,y,tempPath);
            MAT[x][y] = temp;
            tempPath.pop_back();
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &MAT, int n) {
        
        vector<string>ans;
        
        string tempPath = "";
        
        if(MAT[0][0]!=0) helper(MAT,ans,n,0,0,tempPath);
        
        if(ans.size()==0){
            ans.push_back("-1");
        }
        
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends