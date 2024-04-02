// BruteForce Approach
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)


int main()
{
	testcase{
		ll n, ans = 0; cin >> n;
		vector<ll> v1(n), v2(n), v3(n);
		vector< pair<ll,ll> > vp1, vp2,vp3;


		for (int i = 0; i < n; ++i) {
			cin >> v1[i];
			vp1.push_back(make_pair(v1[i], i));
		}
		for (int i = 0; i < n; ++i) {
			cin >> v2[i];
			vp2.push_back(make_pair(v2[i], i));
		}
		for (int i = 0; i < n; ++i) {
			cin >> v3[i];
			vp3.push_back(make_pair(v3[i], i));
		}


		sort(vp1.rbegin(), vp1.rend());
		sort(vp2.rbegin(), vp2.rend());
		sort(vp3.rbegin(), vp3.rend());




		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					if (vp1[i].second != vp2[j].second and vp1[i].second != vp3[k].second and vp3[k].second != vp2[j].second)
					{
						ans = max(ans, vp1[i].first + vp2[j].first + vp3[k].first);
					}
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}

