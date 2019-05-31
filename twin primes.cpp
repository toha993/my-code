#include<bits/stdc++.h>
using namespace std;
bool prime[100005];
int hbe[1000005];
vector<int>v;
void prm()
{
	memset(prime,0,sizeof(prime));
	v.push_back(2); // Only Even Prime
    for ( int i = 4; i <= 100000; i += 2 ) prime[i] = 1; // Remove multiples of 2
 
    int sqrtn = sqrt ( 100000 );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( prime[i] == 0 ) {
            for ( int j = i * i; j <= 100000; j += 2 * i ) prime[j] = 1;
        }
    }
    for ( int i = 3; i <= 100000; i += 2 ) if ( prime[i] == 0 ) v.push_back(i);

}
int segmentedsieve(long long a,long long b)
{
	if(a==1) a++;
	memset(hbe,0,sizeof(hbe));
	int size=sqrt(b);
	//cout <<size << endl;
	for(int i=0;i<v.size() && v[i] <=size;i++)
	{
		long long p=v[i];
		long long j=p*p;
		if(j<a)
			j=((a+p-1)/p)*p;
		for(;j<=b;j +=p)
		{
			hbe[j-a]=1;
		}
	}
	int ck=0;
	for(int i=a;i<=b;i++)
	{
		if(i+2>b)
			break;
		if((hbe[i-a]==0) && (hbe[i+2-a]==0))
			ck++;
		
	}
	return ck;
}
int main()
{
	long long p,q;
	cin >> p >> q;
	prm();
	long long ans=segmentedsieve(p,q);
	cout << ans << endl;

}