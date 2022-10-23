#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,ans=0;
      cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0], min=arr[0];
    for(int i=0;i<a;i++)
    {
        if(arr[i]<max)
        {ans++;
        max=arr[i];}
        if(arr[i]>min)
        {ans++;
        min=arr[i];}
    }
    cout<<ans<<endl;
    return 0;
}
