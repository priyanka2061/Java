//find the all pair that equal to given sum of arra
#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
     vector<pair<int,int>>v;
    int arr[]={20,30,10,30,30,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the sum";
    cin>>n;
    for(int i=0;i<size;i++)
    {
        if(arr[i]+arr[i+1]==n)
        {
            v.push_back(make_pair(i,i+1));
        }

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first
        <<" "<<v[i].second;
    }
    return 0;
}