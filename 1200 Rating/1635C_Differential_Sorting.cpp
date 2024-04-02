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
	    vector<ll> v(n), ans;
	    for (int i = 0; i < n; ++i) cin >> v[i];

		if(v[n-2] > v[n-1]){
			cout << -1 << endl;
			continue;
		}

		if(v[n-1] < 0){
			bool isSorted = true;
			for (int i = 1; i < n; ++i)
			{
				if(v[i-1] > v[i]){
					isSorted = false;
					break;
				}
			}

			if(isSorted) cout << 0 << endl;
			else cout << -1 << endl;
			continue;
		}

		bool isOK = true;

		for (int i = n-3; i >= 0; --i)
		{
			if(v[i] > v[i+1]){
				if(v[i+1] - v[n-1] > v[i]){
					cout << -1 << endl;
					isOK = false;
					break;
				}
				else if(v[i+1] - v[n-1] < v[i]){
					v[i] = v[i+1] - v[n-1];
					ans.push_back(i+1);
				}
			}
		}

		cout << ans.size() << endl;
		for(auto i : ans){
			cout << i << ' ' << i+1 << ' ' << n << endl;
		}
	}
	return 0;
}