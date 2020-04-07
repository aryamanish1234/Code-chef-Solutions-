#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int a[n],i,s=0,x=0,p=0,c=0;
       for(i=0;i<n;i++)
         cin>>a[i];
         
       for(i=0;i<n;i++)
        s=s+(a[i]%k);
            
       cout<<s%k<<endl;
    }
}