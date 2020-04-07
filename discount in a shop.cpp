#include <iostream>
#include<math.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll m=n;
	    ll c=0;
	    while(m!=0){
	        m=m/10;
	        c++;
	    }
	    ll a[c];
	    ll k=c;
	    while(n!=0){
	        a[c-1]=n%10;
	        n=n/10;
	        c--;
	    }
	    c=k;
	    ll f=0;
	    ll t=0;
	    for(ll i=0;i<c-1;i++){
	        if(a[i]<=a[i+1]){
	            if(t==0&&a[i]==0){
	                continue;
	            }
	            cout<<a[i];
	            t++;
	        }
	        else{
	            if(f==0){
	                f=1;
	                continue;
	            }
	            if(f==1){
	                cout<<a[i];
	                t++;
	            }
	        }
	    }
	    if(f==1){
	        cout<<a[c-1];
	    }
	    cout<<endl;
	}
	return 0;
}
