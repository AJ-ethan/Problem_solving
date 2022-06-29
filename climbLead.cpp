#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> v1,v2;
	int a,n1,n2;
	cin>>n1;
	cout<<"enter the ranks\n";
	for(int i=0;i<n1;i++){
		cin>>a;
		v1.push_back(a); }
	cout<<"size of n2:";
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>a;
		v2.push_back(a); }
	int c=1;
	int prev=v1[0];
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++)
		{
			/*if(v1[j]>=v2[i]){
				if(prev==v1[j])
					continue;
				c++;
				prev=v1[j];}
			else if(v1[j]==v2[i])
				continue;
			
			else{
			if(j!=0)
				c++;
				break;
				}
			if(j==n1-1 && v1[j]!=v2[i] )
				c++;
				
		*/
		
		if(v2[i]>=v1[j])
		{
			if(j==0)
				c--;
			c++;
			break;
		}
		else if(v2[i]<v1[j])
		{
			if(prev==v1[j])
				continue;
			else
			{
				prev = v1[j];
				c++;
			}
		}
		if(j==n1-1 )
				c++;
		}
		cout<<c<<" \n";
		c=1;
		prev= v1[0];
	}
		
}
