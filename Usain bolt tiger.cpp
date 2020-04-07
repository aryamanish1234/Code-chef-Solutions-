#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n;
cin>>n;
while(n--)
{
double fin,d2b,at,bs;
cin>>fin;
cin>>d2b;
cin>>at;
cin>>bs;

double tt,bt;
bt=fin/bs;

tt=2*(d2b+fin)/at;


tt=sqrt(tt);
if(tt>bt)
cout<<"Bolt"<<endl;
else cout<<"Tiger"<<endl;

}




	return 0;
}
