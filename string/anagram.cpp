#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    int n,i,count;
    cin>>n;
    string arr,str,str1;
    int a[26]={0},b[26]={0};
    while(n--)
        {
        count=0;
        cin>>arr;
        if(arr.length()%2!=0)
            {
            cout<<-1<<endl;
            continue;
        }
        str=arr.substr(0,arr.length()/2);
        str1=arr.substr(arr.length()/2,arr.length()-1);
        i=0;
        while(str[i]!='\0')
            {
            a[str[i]-97]++;
            i++;
        }
          i=0;
     
        while(str1[i]!='\0')
            {
            b[str1[i]-97]++;
            i++;
        } 
        i=0;
         /*while(i<26)
            {
           cout<<"i="<<i<<"\t"<<b[i]<<endl;
            i++;
        }*/
        while(i<26)
            {
            count+=abs(a[i]-b[i]);
            i++;
        }
        cout<<count/2<<endl;
        memset(a,0,sizeof(int)*26);
         memset(b,0,sizeof(int)*26);
    }
    return 0;
}
