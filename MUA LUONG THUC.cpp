#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, s, m;
	cin >> n >> s >> m;
	int res=0, can=s*m;
	for(int i=1;i<=s;i++) {
		if(i%7==0) {
			continue;
		}
		else {
			res++;
			if(res*n>=can) {
				cout << res << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

