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
	    vector< ll > v(k), dif;	
	    for (int i = 0; i < k; ++i)
	    	cin >> v[i];

	    sort(v.begin(), v.end());

	    for (int i = 1; i < k; ++i)
	    {
	    	dif.push_back(v[i] - v[i-1] - 1);
	    }
	    dif.push_back( ((n-v[k-1]) + (v[0]-1)) );

	    sort(dif.begin(), dif.end(), greater<ll>());

	    ll sum = 0, temp = 0;
	    for(ll i : dif){
	    	if(i - temp == 1) sum += 1;
	    	else if(i > temp) sum += i - temp - 1;
	    	else break;
	    	temp += 4;
	    }

	    cout << n - sum << endl;	}
	return 0;
}