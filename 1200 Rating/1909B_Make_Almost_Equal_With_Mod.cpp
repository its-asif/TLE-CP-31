#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)


int main()
{
	testcase{
		ll n, odd = 0; cin >> n;
		vector<ll> v(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if(v[i]%2) odd++;
		}

		// if(odd && (n-odd)){
		// 	cout << 2 << endl;
		// 	continue;
		// }

		ll x = 1;
		set<ll> st;
		while(true){
			x = x << 1;
			for(auto i : v)
				st.insert( i % x);
			

			if(st.size() == 2) break;
			st.clear();
		}

		cout << x << endl;

	}
	return 0;
}


