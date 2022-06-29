#include <bits/stdc++.h>
using namespace std;
int isDivisible(long long int n)
{
    long long int mul = 1;
    int sum = 0;
    while (n) {
        int k = n % 10;
        sum += k;
        mul *=k;
        n /= 10;
    }
    if (mul % sum == 0)
        return 1;
 
    return 0;
}
int main()
{
    long long int s,l,n,count=0;
    cin >> n;
    for(long long int i=0;i<n;i++)
    {
        cin>>s>>l;
        count=0;
        for(long long int j = s; j<l+1;j++)
            if(isDivisible(j))
                count++;
        cout<<"Case #"<<i+1<<": "<<count;
    }
    
 
    return 0;
}
