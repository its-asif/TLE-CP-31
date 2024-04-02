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
	    string s; cin >> s;

	    set< char > one;
	    set< string > two, three;
	    string tw = "", th = "";
	    for (int i = 0; i < n; ++i)
	    {
	    	one.insert(s[i]);
	    	tw += s[i];
	    	th += s[i];
	    	if(tw.size() > 2) tw.erase(0, 1);
	    	if(th.size() > 3) th.erase(0, 1);

	    	two.insert(tw);
	    	three.insert(th);
	    }

	    bool allOne = true;
	    for (int i = 0; i < 26; ++i)
	    {	
	    	if( one.find( 'a' + i ) == one.end()){
	    		allOne = false;
	    		cout << (char)('a'+i) << endl;
	    		break;
	    	}
	    }
		if(!allOne) continue;

		bool allTwo = true;
		for (int i = 0; i < 26; ++i)
	    {	
	    	string temp = "";
	    	temp += 'a' + i;
	    	for (int j = 0; j < 26; ++j)
	    	{
	    		temp += 'a' + j;
	    		if( two.find( temp ) == two.end()){
		    		allTwo = false;
		    		cout << temp << endl;
		    		break;
		    	}
		    	temp.pop_back();
	    	}
	    	if(!allTwo) break;
	    }
		if(!allTwo) continue;



		bool allThree = true;
		for (int i = 0; i < 26; ++i)
	    {	
	    	string temp = "";
	    	temp += 'a' + i;
	    	for (int j = 0; j < 26; ++j)
	    	{
	    		temp += 'a' + j;
	    		for (int k = 0; k < 26; ++k)
	    		{
	    			temp += 'a' + k;
		    		if( three.find( temp ) == three.end()){
			    		allThree = false;
			    		cout << temp << endl;
			    		break;
			    	}
			    	temp.pop_back();
			    	if(!allThree) break;
	    		}
		    	temp.pop_back();
		    	if(!allThree) break;
	    	}
	    	if(!allThree) break;
	    }
		if(!allThree) continue;

	}
	return 0;
}