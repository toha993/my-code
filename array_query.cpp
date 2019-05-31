#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned long long int t,i,x,j,n,bin[10001]={0};
    for(i=1;i<10000;++i){
        j=i;
        x=1;
        while(j){
            bin[i]=bin[i]+(j%2)*x;
            j/=2;
            x*=10;
        }           
    }
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;;++i){
            if((bin[i]*9)%n==0)
                break;
        }
        cout<<bin[i]*9<<endl;
    }
    return 0;
}