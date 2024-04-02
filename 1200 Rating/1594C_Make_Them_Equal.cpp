// Codeforces Round 747 (Div. 2)
// 1594C - Make Them Equal
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lcm(a, b) ((a)*((b)/__gcd(a,b)))

int main(){
    ll t; cin>>t;
    while(t--){
        int n,cnt=0,ind=-1; cin>>n;
        char c; cin>>c;
        string s; cin>>s;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            if(s[i] == c) ind = i+1; 
            else cnt++; 
        }
        if(cnt==0) cout<<0 << endl;
        else if(s[n-1]==c) cout<<1<<endl<<n<<endl;
        else{
            if(ind!=-1 && ind>n/2) cout<<1<<endl<<ind<<endl;
            else cout<<2<<endl<<n <<' '<<n-1<<endl;
        }
    }}