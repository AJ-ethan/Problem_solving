#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	long long *modArr = new long long[k];
	memset(modArr,o,sizeof(modArr));
	for(long long i=0;i<n;i++)
	{
		long long temp;
		cin>>temp;
		modArr[temp%k]++;
	}
	long long result = 0;
	//can include one multiple of actual number
	if(modArr[0]>=1)
		result++;
	
	for(long long i=1;i<=k/2;
}
