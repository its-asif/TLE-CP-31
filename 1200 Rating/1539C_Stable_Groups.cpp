#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main(){
	fast
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> v(n), dif;

    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

	for (int i = 1; i < n; ++i)
	{
		ll difference = v[i] - v[i-1] - 1;
		if(difference >= x ) dif.push_back( difference / x);
	}

	sort(dif.begin(), dif.end());
	int cnt = dif.size();
	for(auto j : dif){
		if(j <= k){
			k -= j;
			cnt--;
		}
	}

	cout << cnt+1 << endl;
	
	return 0;
}