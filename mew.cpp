#include <bits/stdc++.h>
using namespace std;
unsigned long long bin[10005]={0};
/*void dec(unsigned long long n) {
  string bal;
  for (long long i = 63; i >= 0; i--) {
    long long k = n >> i;
    if (k & 1)
      bal += "1";
    else
      bal += "0";
  }
  stringstream gk(bal);
  unsigned long long x = 0;
  gk >> x;
  bin[n]=x;
}/*/
int main() {
	unsigned long long ans= 0,x,j,i;
    for(i=1;i<10000;++i){
        j=i;
        x=1;
        while(j){
            bin[i]=bin[i]+(j%2)*x;
            j/=2;
            x*=10;
        }           
    }
  int t;
  cin >> t;
  while (t--) {
    unsigned long long q;
    cin >> q;
 
    for (i = 1; i < 10000; i++) {
     	if(bin[i]*9%q==0)
     		{
     			ans=bin[i]*9;
     			break;
     		}

    }

    cout << ans << endl;
  }
}