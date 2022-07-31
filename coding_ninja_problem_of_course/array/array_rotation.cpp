#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,30,40,40,50};
  int size=sizeof(arr)/sizeof(arr[0]);
  int d=2;
  int temp;
  for(int i=0;i<size;i++)
  cout<<arr[i]<<"-";
  temp=arr[0];
  for(int k=0;k<d;k++)
  {
        
      
    for( int i=0;i<size;i++)
    {
       arr[i]=arr[i+1];
    
    }
    arr[size-k]=temp;

  }
  for(int i=0;i<size;i++)
  cout<<"\n" <<arr[i]<<" ";

    return 0;
}
