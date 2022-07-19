#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

void loading() {
	int n, x;
	cin >> n >> x;
	int a[n], count=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		if(a[i]==x) count++;
	}
	if(count!=0) {
		cout << count << endl;
	}
	else cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
	return 0;
}

