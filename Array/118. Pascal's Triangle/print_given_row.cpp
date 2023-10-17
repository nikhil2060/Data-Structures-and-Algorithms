#include <iostream>
using namespace std;

int find_ncr(int n,int r)
{
    long long ans=1;

    for(int i=0;i<r;i++)
    {
        ans*=(n-i);
        ans=ans/(i+1);
    }

    return ans;
}

int main()
{
    int r;
    cin>>r;
    
    vector<int>ans;

    for(int i=0;i<r;i++)
    {
        ans.push_back(find_ncr(r-1,i));
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    return 0;
}
