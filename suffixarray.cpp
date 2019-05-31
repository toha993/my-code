#include <bits/stdc++.h>
using namespace std;

vector<string> v;
int binmin(int l,int r,string val)
{
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(v[mid].find(val)==0)
		{
			if(mid==0)return mid;
			if(v[mid-1].find(val)==0)return binmin(l,mid-1,val);
			return mid;
		}
		if(val<v[mid])return binmin(l,mid-1,val);
		return binmin(mid+1,r,val);
	}
}
int binmax(int l,int r,string val)
{
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(v[mid].find(val)==0)
		{
			if(mid+1==v.size())return mid;
			if(v[mid+1].find(val)==0)return binmax(mid+1,r,val);
			return mid;
		}
		if(val<v[mid])return binmax(l,mid-1,val);
		return binmax(mid+1,r,val);
	}
}
bool bin(int l,int r,string val)
{
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(v[mid].find(val)==0)return 1;
		if(val<v[mid])return bin(l,mid-1,val);
		return bin(mid+1,r,val);
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	while(s.size()!=0)
	{
		v.push_back(s);
		s.erase(s.begin());
	}
	sort(v.begin(), v.end());
	for(auto a:v)cout<<a<<endl;
	string ss;
	cin>>ss;
	if(!bin(0,v.size()-1,ss))cout<<0<<endl,exit(0);
	int x=binmax(0,v.size()-1,ss)-binmin(0,v.size()-1,ss)+1;
	cout<<x<<endl;
	return 0;
}