#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    double sum=0,avg=0;
      while(1){
            scanf("%d",&n);
            double arr[n];
            if(n==0)
                break;
            sum=0;
            avg=0;
            for(i=0;i<n;i++){
                scanf("%lf",&arr[i]);
                sum+=arr[i];
            }
            avg=sum/n;
           // cout << avg << endl;

            double sum1=0,sum2=0,dif=0;
            for(i=0;i<n;i++){
                dif=(double)(long)((arr[i] - avg) * 100) / 100.0;
                if(dif<0)
                   {
                   	 sum2-=dif;
                   	 cout << sum2 << endl;
                   	}
                else
                    {
                    	sum1+=dif;
                    	cout << sum1 << endl;
                    }
            }
            if(sum2>sum1){
                printf("$%.2lf\n", sum2);
            }else{
                printf("$%.2lf\n", sum1);
            }
          }
    return 0;
}