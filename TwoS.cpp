#include<isotream>


int TwoStacks(int maxsum,vector<int> a,vector<int> b)
{
	int i=0,j=0;
	long long int total=0,sum=0;
	while(i<a.size() && total+a[i]<=maxsum)
	{
		total += a[i];
		i++;
		sum++;
	}
	while(j<b.size() && i>=0)
	{
		total += b[j]
		j++;
		
		while(i>0 && total>maxsum)
			i--;total -= a[i];
		if (total<=maxsum && i+j>sum)
			sum = i+j;
	}
	return sum;
}
int main()
{
}
