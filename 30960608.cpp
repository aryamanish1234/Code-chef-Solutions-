#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, n, h, y1, y2, l,count;
	cin>>T;
	while(T--){
	    cin>>n>>h>>y1>>y2>>l;
	    count = 0;
	    while(n--){
	        int t, xi;
	        cin>>t>>xi;
	        if(l>0){
    	        if(t == 1){
    	            if(xi>=(h-y1)) count++;
    	            else {if(--l) count++;}
    	        }
    	        else{
    	            if(xi<=y2) count++;
    	            else {if(--l) count++;}
    	        }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
