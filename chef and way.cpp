#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(void)
{
	//cout<<MOD<<endl;
	long long int n,k;
	cin>>n>>k;
	long long int *ans=new long long int[n];
	long long int *arr=new long long int[n];
	double *fake=new double[n];
	for(int i=0;i<n;i++)
	ans[i]=1;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	//sort(arr,arr+n);
	long long int left=0;
	ans[0]=arr[0];
	fake[0]=log(arr[0]);
	for(long long int i=1;i<n;i++)
	{
		if((i-left)<=k){
			double take=fake[left];
			long long int mini=ans[left];
			for(long long int j=left+1;j<i;j++)
			{
				if(fake[j]<take)
				{
					take=fake[j];
					mini=ans[j];
				}
			}
			fake[i]=take+log(arr[i]);
			ans[i]=(arr[i]*mini)%MOD;
		}
		else{
			left++;
			double take=fake[left];
			long long int mini=ans[left];
			for(int j=left+1;j<i;j++)
			{
				if(fake[j]<take)
				{
					take=fake[j];
					mini=ans[j];
				}
			}
			fake[i]=take+log(arr[i]);
			ans[i]=(arr[i]*mini)%MOD;
		}
	}
	cout<<ans[n-1]<<endl;
}
