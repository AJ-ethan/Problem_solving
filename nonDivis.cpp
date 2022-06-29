#include<iostream>
#include<vector>

vector<int> NonDiv(int k,vector<int> arr)
{
	vector<int> v;
	
	vector<vector<int>> vec;
	for(int i=0;i<arr.size();i++)
	{
		for(int j=i+1;j<arr.size();i++)
		{
			if(arr[i]+arr[j]%k==0)
				vec.push_back({arr[i],arr[j]});
		}
	}	
	for(int i=0;i<vec.size();i++)
	{

	}
	
}

