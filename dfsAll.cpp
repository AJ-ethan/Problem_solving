#include<bits/stdc++.h>

using namespace std;

int row,col;

int rd[] = {-1,0,1,0};
int cd[] = {0,-1,0,1};
int vis[10][10];
int vec[10][10];
bool isvalid(int row,int col,int adjx,int adjy)
{
	if (adjx < 0 || adjy < 0
        || adjx >= row || adjy >= col)
        return false;
 
   	 // If cell is already visited
    		if (vis[adjx][adjy])
        	return false;
 
    	// Otherwise
    	return true;
}
int dfs_c(int row, int col,int r,int c)
{
	int count=1;
	stack<pair<int,int>>s;
	
	s.push({r,c});
	
	vis[r][c]=true;
	
	while(!s.empty())
	{
		pair<int,int> cell = s.top();
		int x = cell.first;
		int y = cell.second;
		cout<<vec[x][y]<<" ";
		s.pop();
		for(int i =0;i<4;i++)
		{
			int adjx= x+rd[i];
			int adjy = y+cd[i];
			if(isvalid(row,col,adjx,adjy) && vec[adjx][adjy])
			{
			s.push({adjx,adjy});
			vis[adjx][adjy] = true;
			count++;
			}
		}
			
		}
		cout<<endl;
		return count;
			
}
int main()
{
//int row,col;
	cin>>row;
	cin>>col;
	//int vec[row][col];
	//bool vis[row][col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>vec[i][j];
	memset(vis, false, sizeof(vis));
	int max=0,temp;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(!vis[i][j] && vec[i][j]){
				temp = dfs_c(row,col,i,j);
				if(temp>max)
					max = temp;
				}}}
	cout<< max<<endl;
	
}
