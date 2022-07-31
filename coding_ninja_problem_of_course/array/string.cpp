#include<iostream>
using namespace std;

bool find_string(string s,int index,string s2)
{
   if(s2.size()==0)
   return true;
   else
   {
    int j=0;
    for(int i=index;i<s.size();i++)
    {
        if(s[i]==s2[j])
        {
            string substring =s2.substr(1);
            find_string(s,i,substring);
            return true;
        }
    }
   }
   return false;
}
int main ()
{

    string s,s2;
    cout<<" enter a  two string ";
    cin>>s>>s2;
   bool result=find_string(s,0,s2);
   cout<<result;

    return 0;
}
