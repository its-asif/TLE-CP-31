#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, x, y; cin >> n >> x >> y;
	    ll lcm = (x*y)/ __gcd(x,y);

	    ll plusCnt = (n/x) - (n/lcm);
	    ll minCnt= (n/y) - (n/lcm);

	    
	    ll plus = ((n + n-plusCnt+1) * plusCnt) / 2;
	    ll minus = ((1 + minCnt)     * minCnt ) / 2;
	    ll sum = plus - minus;

	    cout << sum << endl;
	}
	return 0;
}