#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;
int cn=0;
int n,m,x,y,cp=0,ck=0,ans=0;
bool visited[55][55]={0};
char a[55][55];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int bokbok(int x,int y)
{
	bool visited[55][55]={0};
	visited[x][y]=1;
	cn=1;
	for (int i = x-1; i >=0 ; i--)
	{

		if(a[i][y]=='B')
			{
				if(visited[i][y]==0)
					cn++;
				 visited[i][y]==1;
				for (int j = y+1; j < m; j++)
					{
						if(a[i][j]=='B')
							{
								if(visited[i][j]==0)
									cn++;
								visited[i][j]=1;
							}
						else
							break;
					}
				for (int j = y-1; j >=0 ; j--)
					{
						if(a[i][j]=='B')
							{
								if(visited[i][j]==0)
									cn++;
								visited[i][j]=1;
							}
						else
							break;
					}
			}
		else
			break;
	}
	//cout << cn << endl;
	for (int i = x+1; i <n ; i++)
	{
		if(a[i][y]=='B')
			{
				if(visited[i][y]==0)
					cn++;
				 visited[i][y]==1;
				for (int j = y+1; j < m; j++)
					{
						if(a[i][j]=='B')
							{
								if(visited[i][j]==0)
									cn++;
								visited[i][j]=1;
							}
						else
							break;
					}
				for (int j = y-1; j >=0 ; j--)
					{
						if(a[i][j]=='B' && visited[i][j]==0)
							{
								if(visited[i][j]==0)
									cn++;
								visited[i][j]=1;
								
							}
						else
							break;
					}
			}
		else
			break;
	}
	//cout << cn << endl;
	for (int i = y+1; i < m; i++)
	{
		if(a[x][i]=='B')
			{
				if(visited[x][i]==0)
					cn++;
				visited[x][i]==1;
				for (int j = x+1; j < n; j++)
					{
						if(a[j][i]=='B')
							{
								if(visited[j][i]==0)
									cn++;
								visited[j][i]=1;
							}
						else
							break;
					}
				for (int j = x-1; j >=0 ; j--)
					{
						if(a[j][i]=='B')
							{
								if(visited[j][i]==0)
									cn++;
								visited[j][i]=1;
							}
						else
							break;
					}

			}
		else
			break;
	}
	//cout << cn << endl;
	for (int i = y-1; i >=0 ; i--)
	{
		if(a[x][i]=='B')
			{
				if(visited[x][i]==0)
					cn++;
				visited[x][i]==1;
					for (int j = x+1; j < n; j++)
					{
						if(a[j][i]=='B')
							{
								if(visited[j][i]==0)
									cn++;
								visited[j][i]=1;
							}
						else
							break;
					}
				for (int j = x-1; j >=0 ; j--)
					{
						if(a[j][i]=='B')
							{
								if(visited[j][i]==0)
									cn++;
								visited[j][i]=1;
							}
						else
							break;
					}

			}
		else
			break;
	}
	//cout << cn << endl;
	return cn;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(a[i][j]=='B' && cp==0)
			{
				cp=1;
				x=i,y=j;
			}
			if(a[i][j]=='B')
				ck++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			if(a[i][j]=='B')
			{
				ans=bokbok(i,j);
				//cout << ans << " " <<  i << " " << j << endl; 
				if(ans !=ck)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
		}
	}
	cout << "YES" << endl;

}

