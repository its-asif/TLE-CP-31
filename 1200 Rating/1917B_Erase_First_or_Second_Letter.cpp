#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define testcase ll t; cin >> t; while(t--)


int main()
{
	testcase{
		int n, sum = 0; cin >> n;
		string s; cin >> s;
		set< char > st;
		
		for (int i = 0; i < n; ++i)
		{
			if(st.find(s[i]) == st.end()){
				st.insert(s[i]);
				sum += n-i;
			}
		}
		cout << sum << endl;

	}
	return 0;
}

