#include <bits/stdc++.h>
//#include "E:\codeblocksfile\c++\learning.h"
//#include "E:\codeblocksfile\c++\data_structure_tool\prime.h"
//#include "E:\codeblocksfile\c++\data_structure_tool\toolbox.h"
//#include "E:\codeblocksfile\c++\data_structure_tool\fraction.h"
using namespace std;
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define sci3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define scs(s) scanf("%s",s)
#ifndef GET_MACRO

#define GET_MACRO(__1,__2,__3,NAME,...) NAME

#endif // GET_MACRO

#define sci(...) GET_MACRO(__VA_ARGS__,sci3,sci2,sci1)(__VA_ARGS__)
#define ll int64_t
#define pii pair<int,int>
#define mp(a,b) make_pair(a,b)
int64_t md=1000000007;
int64_t f_(int64_t l){
    ll t=1,odd=0,even=0,ind=0,s=1,ans;
    while(s<=l){
        if(ind==0){
            odd+=t;
        }
        else{
            even+=t;
        }
        t*=2;
        s+=t;
        ind=(ind+1)%2;
        cout << even << " " << odd << endl;
    }
    s-=t;
    if(s<l){
        if(ind==0)odd+=(l-s);
        else even+=(l-s);
    }
    //cout << odd << " " << even << endl;
    odd=odd%md;
    odd=(odd*odd)%md;
    even=even%md;
    ans=(even*even)%md;
    ans=(ans+even)%md;
    ans=(ans+odd)%md;
    return ans;
}
int main(){
    //freopen("input.txt","r",stdin);
    ll l,r,ans;
    cin>>l>>r;
    ans=f_(r);
    ans=(ans-f_(l-1ll)+md)%md;
    cout<<ans<<endl;
    return 0;


}