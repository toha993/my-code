#include<iostream>
#include<cstdio>
using namespace std;
int n,x,sum,ans,pre,lst;

int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&x);
		if (lst==x) sum++;
		else pre=sum,sum=1;
		lst=x;
		ans=max(ans,min(pre,sum));
	}
	printf("%d\n",ans*2);
}