#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n; cin >> n;
	    vector<int> v(n+1);
	    for (int i = 1; i <= n; ++i) cin>> v[i];
	    
	    int cnt = 0;
	    for(ll i = 1; i <= n; i++) {
			for(ll j = v[i] - i; j <= n; j += v[i]){
				if(i < j and v[i] * v[j] == i+j) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}