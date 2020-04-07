#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{   
 
    int test;
    cin >> test;
    while(test--)
    {
           map<int,int> m;
        int n;
        cin >> n;
        while(n--)
        {
            string s;
            cin >> s;
            for(int i =0;i<s.size();i++)
                if(s[i]=='1')
                    m[i]++;
        }
        int count = 0;
        for(auto i:m)
            count += i.second%2;
        cout << count << endl;
    }
    return 0;
}