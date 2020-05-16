#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k, n, w;
	cin >> k >> n >> w;
	int res = 0;
	for(int i = 1; i <= w; i++){
		int t = i * k;
		res += t;
	}
	if(res-n > 0){
		cout << res-n;
	} else{
		cout << 0;
	}
	cout << "\n";
	return 0;
}
