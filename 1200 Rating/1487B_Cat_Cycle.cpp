#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, k; cin >> n >> k;

	    ll ans = k - 1;
	    if(n % 2)
	    	ans += ( (k-1) / (n/2));

	    ans %= n;
	    cout <<  ans + 1 << endl;
	}
	return 0;
}