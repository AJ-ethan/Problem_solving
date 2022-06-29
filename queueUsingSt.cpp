#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

int main()

{
	int n,c,v;
	cin>>n;
	stack<int> s1,s2;
	for(int i=0;i<n;i++){
	cin>>c;
	switch(c){
	case 1:
		cin>>v;
		s1.push(v);
		break;
	case 2:
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
			s2.pop();
		}
		else
			s2.pop();
		break;
	case 3:
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
			cout<<s2.top();
		}
		else
			cout<<s2.top();
		break;
	}
	}
}
