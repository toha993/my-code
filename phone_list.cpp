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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
		




class Trie
{
	const static int mx=10;
	bool ans;
	struct node
	{
		int endmark;
		node *next[mx];
		node()
		{
			endmark=0;
			for(int i=0;i<mx;i++)next[i]=NULL;
		}
	}*root;

	void del(node* cur)
	{
	    for (int i = 0; i < mx; i++)
	        if (cur->next[i])
	            del(cur->next[i]);
	    delete (cur);
	}
 public:
	Trie()
	{
		ans=1;
		root=new node();
	}
	~Trie()
	{
		del(root);
	}
	void insert(string s)
	{
		node *curr=root;
		for(int i=0;i<s.size();i++)
		{
			int k=s[i]-'0';
			if(curr->next[k]==NULL)
				curr->next[k]=new node();
			curr=curr->next[k];
			if(curr->endmark==2)ans=0;
			if(1+i!=s.size())
			{
				curr->endmark=1;
			}
		}
		if(curr->endmark==0)
		{
			curr->endmark=2;
		}
		else
		{
			ans=0;
			curr->endmark=2;
		}
	}
	void print()
	{
		if(ans)printf("YES\n");
		else printf("NO\n");
	}
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Trie T;
		string s;
		int n;
		cin>>n;
		while(n--)
		{
			cin>>s;
			T.insert(s);
		}
		T.print();
		// cout<<T.print()<<endl;
	}
}


