#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
vector<int> getMax(vector<string> operations) {
    int s= operations.size(),top = -1;
    vector<int> stack;
    for(int i=0;i<s;i++)
    {
        stringstream ss(operations[i]);
        int x=0;
        ss>>x;
        if(x==1)
        {
            long int y=0;
            ss>>y;
            top = top +1;
            stack.push_back(y);
        }
        
        else if(x==2){
            if(top==-1)
                continue;
            stack.pop_back();
            top = top-1;
        }
        else if(x==3)
        {
            cout << *max_element(stack.begin(), stack.end());
        }
    }
    return stack;
}
int main()
{
	int n;
	cin>>n;
	string s;
	vector<string> op;
	cout<< "enter values\n";
	for(int i = 0;i<=n;i++)
	{
		getline(cin,s);
		op.push_back(s);
	}
	//op.push_back("1 83");
	//op.push_back("3");
	//op.push_back("2");
	//op.push_back("1 76");
	
	getMax(op);
}
