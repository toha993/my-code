#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	while(cin >> a >> b && (a || b))
	{
		if(b==0 || b == 100 || a == 0){
			cout << "Not found" << endl;
			continue;
		}

		long long v=(100*(a-1)/(100-b));
		if((100*(a-1)%(100-b)) ==0)
			v--;
		if(v<a){

			cout << "Not found" << endl;
			continue;
		}
		cout << v << endl;
	}




















}