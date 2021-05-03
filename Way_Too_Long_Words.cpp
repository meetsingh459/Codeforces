#include<bits/stdc++.h>

using namespace std;

#define ll int64_t
#define mod 1e+09


float r(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve(){
	string s; cin >> s;
	int n = s.size();
	(n > 10)? cout << s[0] << n-2 << s[n-1]: cout << s;
	cout << "\n";
}


int main(){
		
	ll t; cin >> t;
	while(t--) solve();
	return 0;
}