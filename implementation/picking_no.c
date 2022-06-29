#include <stdio.h>
int main(void) {
    // your code goes here
    int n;scanf("%d",&n);
    int arr[101];
    int i,c=0;
    for(i=1;i<=100;i++)arr[i]=0;
    
    for(i=0;i<n;i++)
    {int x;
        scanf("%d",&x);
        arr[x]+=1;
    }
    for(i=1;i<100;i++)
    {
        int t=(arr[i]+arr[i+1]);
        if(t>c)
        c=t;
    }
    printf("%d",c);
    return 0;
}
