#include<iostream>
#include<string>
using namespace std;
string meet(int x1,int v1,int x2,int v2)
{
	if(x2>x1 && v2>v1)
		return "NO";
	int a = v1*x2;
	//x1 = x1+v1;
	//x2 = x2+v2;
	while(x1<=a && x2<=a)
	{
		if(x1==x2)
			return "YES";
		x1 = x1+v1;
		x2 = x2+v2;
	}
	return "NO";

}


int main()
{	
	int x1,v1,x2,v2;
	for(int i=0;i<5;i++)
	{
		cin>>x1>>v1>>x2>>v2;
		cout<< meet(x1,v1,x2,v2)<<"\n";
	}
}

