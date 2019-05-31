#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int t;
 	cout << "PERFECTION OUTPUT" << endl;
 	while(scanf("%d",&t) && t)
 	{
 		int sum=0;
 		for(int i=1;i<=t/2;i++)
 		{
 			if(t%i==0)
 				sum +=i;
 		}
 		if(sum==t)
 		{
 			if(t<10)
 			cout << "    " << t << "  PERFECT" << endl;
 			else if(t<100)
 			cout << "   " << t << "  PERFECT" << endl;
 			else if(t<1000)
 			cout << "  " << t << "  PERFECT" << endl;
 			else if(t<10000)
 			cout << " " << t << "  PERFECT" << endl;
 		    else if(t<100000)
 			cout <<  t << "  PERFECT" << endl;
 		}
 		if(sum<t)
 		{
 			if(t<10)
 			cout << "    " << t << "  DEFICIENT" << endl;
 			else if(t<100)
 			cout << "   " << t << "  DEFICIENT" << endl;
 			else if(t<1000)
 			cout << "  " << t << "  DEFICIENT" << endl;
 			else if(t<10000)
 			cout << " " << t << "  DEFICIENT" << endl;
 		    else if(t<100000)
 			cout <<  t << "  DEFICIENT" << endl;
 		}
 		if(sum>t)
 		{
 			if(t<10)
 			cout << "    " << t << "  ABUNDANT" << endl;
 			else if(t<100)
 			cout << "   " << t << "  ABUNDANT" << endl;
 			else if(t<1000)
 			cout << "  " << t << "  ABUNDANT" << endl;
 			else if(t<10000)
 			cout << " " << t << "  ABUNDANT" << endl;
 		    else if(t<100000)
 			cout <<  t << "  ABUNDANT" << endl;
 		}
 	}
 	cout << "END OF OUTPUT" << endl;










}