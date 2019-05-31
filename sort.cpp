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


bool cmp(pair<int,int>a,pair<int,int>b)
{
	if(a.first==b.first){
		return a.second<b.second;
	}
	return a.first>b.first;
}

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	std::vector<pair<int,int>> v(n);
	for(auto &a:v)cin>>a.first>>a.second;
	sort(v.begin(), v.end(),cmp);
	for(auto a:v)cout<<a.first<<' '<<a.second<<endl;
	return 0;
}