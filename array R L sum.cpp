#include <bits/stdc++.h>
using namespace std;

bool processSherlock(int inp[],int &n)
{
    int leftSum[n],rightSum[n];
    leftSum[0]=0;
    rightSum[n-1]=0;
    
    for(auto i=1;i < n;i++)
    {
        leftSum[i]=inp[i-1]+leftSum[i-1];
    }
    
    for(auto i=n-2; i >=0;i--)
    {
        rightSum[i]=rightSum[i+1]+inp[i+1];
    }
    
    for(auto i=0; i < n;i++)
    {
        if(leftSum[i]==rightSum[i])
            return true;
    }
    
    return false;
    
}

int main(int argc, const char * argv[])
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int n;
        cin >> n;
        int inp[n];
        for(auto i=0; i < n;i++)
            cin >> inp[i];
        if(processSherlock(inp,n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
