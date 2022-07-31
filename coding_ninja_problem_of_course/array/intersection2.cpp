#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,30,30,40,40,50};
    int arr1[]={20,30,50,60,70,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int i=0,j=0;
    while(n!=i&&m!=j)
    {
        if(arr[i]==arr1[j])
        {
        cout<<arr[i]<<" ";
        i++;
        j++;
        }
        else if(arr[i]>arr1[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
