#include<iostream>
#define max 100
using namespace std;
int top1=-1;
int top2=-1;
int top3=-1;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	long int st1[100001],st2[100001],st3[100001],i,s1=0,s2=0,s3=0;
	for(i=n1-1;i>=0;i--)
	{
		top1=top1+1;
		cin>>st1[i];
		s1=s1+st1[i];
		}
	for(i=n2-1;i>=0;i--)
		{
		top2=top2+1;
		cin>>st2[i];
		s2=s2+st2[i];
		}
	for(i=n3-1;i>=0;i--)
		{
		top3=top3+1;
		cin>>st3[i];
		s3=s3+st3[i];
		}
	cout<<top1<<top2<<top3;
	while(top1!=-1 && top2!=-1 && top3!=-1)
	{
		cout<<" start  "<<s1<<" "<<s2<<" "<<s3<<"\n";
		if(s1==s2 && s3==s2)
			break;
		if(s1>=s2 && s1>=s3){
			s1=s1-st1[top1];
			top1 =top1-1;}
		else if(s2>=s1 && s2>=s3){
			s2=s2-st2[top2];
			top2=top2-1;}
		else if(s3>=s1 && s3>=s2){
			s3 = s3-st3[top3];
			top3=top3-1;}
		cout<<" end "<<s1<<" "<<s2<<" "<<s3<<"\n";
		
		
	}
	if(s1==0||s2==0||s3==0)
		cout<<0;
	else
	cout<<s1<<"\n";

}
