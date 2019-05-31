#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		double a,b,c;
		cin >> a >> b >> c;
		cout <<"Case "<< i << ": ";
		if(b>=c || (b==0 || c==0))
			{
				cout << "can't determine" <<endl;
				continue;
			}

		b *=(-1);
		//cout << b << endl;
		double s=b/c;
		//cout << s << endl;
		double angle=((acos(s)*180)/3.1416)-90;
		//cout << angle << endl;
		double v=c*cos(angle*(3.1416/180));
		//cout << v << endl;
		double t1=a/v;
		double t2=a/c;
		//cout << t1 << " " << t2 << endl;
		double dif=t1-t2;
		printf("%.3lf\n",dif);
	}
}