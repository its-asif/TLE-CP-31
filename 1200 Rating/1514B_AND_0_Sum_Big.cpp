#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll n, k, mul = 1LL; cin >> n >> k;
	    for (int i = 1; i <= k; ++i)
	    {
	    	mul *= n;
	    	mul %= 1000000007;
	    }

	    cout << mul << endl;
	}
	return 0;
}