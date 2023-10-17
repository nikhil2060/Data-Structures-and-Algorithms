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
    int r,c;
    cin>>r>>c;
    
    cout<<find_ncr(r-1,c-1)<<endl;
    return 0;
}
