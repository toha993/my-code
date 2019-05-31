#include<bits/stdc++.h>
using namespace std;
vector< string > fib;
string bigintPlus(string a, string b);
string fibo(int n){
    if(fib.size()>=n){
        return fib[n];
    }
    else{
        fib.push_back(bigintPlus(fib[n-1],fib[n-2]));
        if(fib.size()  < n)
            fibo(fib.size()+1);
        return fib[n];
    }
}

int main(){
    string a="0";
    fib.push_back(a);
    a="1";
    fib.push_back(a);
    fib.push_back(a);

    while(1){
        int n;
        cin>>n;
        if(n==-1){
            break;
        }
        string a;
        a=fibo(n);
        cout<<a<<endl;
        break;
    }
}
string bigintPlus(string a, string b){
    cout << a << " " << b << endl;
   string c;
    if(a.size()<b.size()){
        swap(a,b);
    }
    int sz=min(a.size(),b.size());
    int carry=0;
    c="";
    for(int i=0;i<sz;i++){
        int x=a[a.size()-i-1]-'0';
        int y=b[b.size()-i-1]-'0';
        c+=((x+y+carry)%10)+'0';
        carry=(x+y+carry)/10;
    }
    for(int i=sz;i<a.size();i++){
        int x=a[a.size()-i-1]-'0';
        c+=((x+carry)%10)+'0';
        carry=(x+carry)/10;
    }
    while(carry){
        c+=(carry%10)+'0';
        carry/=10;
    }
    reverse(c.begin(),c.end());
    return c;
}
