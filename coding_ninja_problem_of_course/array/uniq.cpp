#include<iostream>
using namespace std;
int main ()
{
    int p=0,a,b;
    int arr[]={3,3,7,7,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i<size;i++)
    {  
        p=p^arr[i];
    }
  
    cout<<"unique_number:"<<p;
    return 0;
}