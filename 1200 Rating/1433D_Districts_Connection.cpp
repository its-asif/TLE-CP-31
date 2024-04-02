#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    ll mn = INT_MAX, mn_indx = -1, mx= INT_MIN, mx_indx = -1;
	    ll n; cin >> n;
	    vector<ll> v(n);

	    for (int i = 0; i < n; ++i)
	    {
	    	cin >> v[i];

	    	if(mn > v[i]) mn_indx = i;
	    	mn = min(mn, v[i]);

	    	if(mx < v[i]) mx_indx = i;
	    	mx = max(mx, v[i]);
	    }


	    if(mn == mx){
	    	cout << "NO" << endl;
	    	continue;
	    }

	    cout << "YES" << endl;

	    for (int i = 0; i < n; ++i)
	    {
	    	if(v[i] != mn)
	    		cout << mn_indx+1 << ' ' << i+1 << endl;
	    	

	    	if(i != mn_indx && v[i] == mn)
		    	cout << i+1 << ' ' << mx_indx+1 << endl;
	    }

	}
	return 0;
}