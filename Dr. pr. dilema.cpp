#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b,c,d,i,n;
    cin >> n;
    
    for(i=1;i<=n;i++) {
        cin >> a >> b >> c >> d;
    if(c==d) {
        if(a==b)
        cout <<"YES" << endl;
        else
        cout << "NO" << endl;
        continue;
    }
    if(a==b || (b-a)%(c-d)==0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    }
}
