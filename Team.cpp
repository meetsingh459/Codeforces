#include<bits/stdc++.h>

using namespace std;

#define ll int64_t
#define mod 1e+09


float r(float var){
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve(){
	int n; cin >> n;
	int res= 0;
	while(n--){
		int a, b, c; cin >> a >> b >> c;
		if(a+b+c > 1) res++;
	}		
	cout << res;
}


int main(){
		
	solve();
	return 0;
}