#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n;
	cin >> n;
	bool dd[10]={false};
	for(int i=0;i<n;i++) {
		long long x;
		cin >> x;
		while(x) {
		dd[x%10]=true;
		x/=10;
	    }
	}
	for(int i=0;i<10;i++) {
		if(dd[i]) cout << i << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

