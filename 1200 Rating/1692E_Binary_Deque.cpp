#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcase ll t; cin>>t; while(t--)
#define endl "\n"

int main(){
	fast
	testcase{
	    
		ll n, s, sum = 0; cin >> n >> s;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			sum += arr[i];
		}

		if(sum < s){
			cout << -1 << endl;
			continue;
		}

		ll mx = 0;
		queue<ll> q;
		sum = 0;

		for (int i = 0; i < n; ++i)
		{
			sum += arr[i];
			q.push(arr[i]);

			while(sum > s){
				sum -= q.front();
				q.pop();
			}

			mx = max(mx, (ll)(q.size()));
		}
		

		cout << n-mx << endl;

	}
	return 0;
}