#include <bits/stdc++.h>
using namespace std;
#define mx 1000005
int check ( int N , int pos) {
    return (bool)(N&(1<<pos)) ;
}
int build ( int N , int pos) {
    return (N =(N|(1<<pos)));
}
int main() {
 
    while(1) {
        int a ;
        scanf("%d",&a);
        if ( a == 0) break;
        int mark[mx/32+5];
        printf("%d:\n",a);
 
        for ( int i = 4 ; i <= a ; i = i + 2)
            mark[i/32] = build(mark[i/32],i%32);
 
        for ( int i = 3 ; i*i <= a ; i = i + 2) {
            if ( check(mark[i/32],i) == 0) {
                for ( int j = i*i ; j <= a ; j = j+i)
                    mark[j/32] = build(mark[j/32],j%32);
            }
        }
       
        for ( int i = 0 ; i <= 1 ; i++)
            mark[i/32] = build(mark[i/32],i%32);
 
        int p,q ;
        int logic = 0 ;
        for ( int i = 2 ; i <= a ; i++) {
            if ( (check(mark[i/32],i) == 0) && (check(mark[(a-i)/32],(a-i)) == 0) ) {
                logic = 1 ;
                p = i ;
                q = a-i;
                break;
            }
        }
 
        if ( logic == 1 ) printf("%d+%d\n",q,p);
        else printf("NO WAY!\n");
    }
    return 0 ;
}