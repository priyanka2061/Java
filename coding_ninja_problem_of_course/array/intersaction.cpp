#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int arr[]={1,3,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={1,6,9,8,3,5};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    if(size2>size)
    {
         int j=0;
         sort(arr,arr+size);
         int mid=0+(size-0)/2;
         for(int i=0;i<size;i++)
         { 
             int t=arr2[j];
             if(t==arr[mid])
             {
                cout<<i<<" ";
                j++;
             }
             
             else if(arr[mid]>t)
             {
                for(int i=0;i<mid-1;i++)
                {
                    if(arr[i]==t)
                    cout<<i<<" ";
                    
                }
                j++;
                cout<<" \n" <<arr2[j];

             }
             else
             {
                
                for(int i=mid+1;i<size2;i++)
                {
                    if(arr[i]==t)
                    cout<<i<<" ";
                    
                }
                j++;
             }
             j++;
         }
    }
    else
    {

          int j=0;
         sort(arr2,arr2+size2);
         int mid=size2/2;
         for(int i=0;i<size2;i++)
         { 
             int t=arr[j];
             if(t==arr2[mid])
             {
                cout<<t;
                j++;
             }
             else if(arr2[mid]>t)
             {
                for(int i=0;i<mid-1;i++)
                {
                    if(arr2[i]==t)
                    cout<<t;
                }
                j++;
             }
             else
             {
                
                for(int i=mid+1;i<size2;i++)
                {
                    if(arr2[i]==t)
                      cout<<t;
                }
                j++;
             }
             j++;
             
         }
    }
    return 0;

}