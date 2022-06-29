vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int n1 = ranked.size(),n2 = player.size();
    int prev = ranked[0],c=1;
    vector<int> v1;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++)
        {
        if(player[i]>=ranked[j])
        {
            if(j==0)
                c--;
            c++;
            break;
        }
        else if(player[i]< ranked[j])
        {
            if(prev==ranked[j])
                continue;
            else
            {
                prev = ranked[j];
                c++;
            }
        }
        if(j==n1-1 )
                c++;
        }
        v1.push_back(c)
        c=1;
        prev= ranked[0];
    }
    retrun v1;
}
/*#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,t,max_rank=0,cr,cs=0; 
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++)
    {
        scanf("%d",&t);
        if(max_rank)
        {
            if(scores[max_rank-1]==t)
            {
                continue;  
            }
        }
        scores[max_rank++]=t;
    }
    cr=max_rank+1;
    //printf(" %d\n",cr);
    int m; 
    scanf("%d",&m);
    int *alice = malloc(sizeof(int) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%d",&alice[alice_i]);
    }
    // your code goes here
    int temp;
    for(int i=0;i<m;i++)
    {
        cs=alice[i];
        temp=cr;
        while(temp>0 && scores[--temp]<=cs ) cr=temp;
        printf("%d\n",cr+1);
    }
    return 0;
}*/
