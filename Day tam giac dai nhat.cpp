#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n, count=0;
	cin >> n;
	int a[n+1], maxa[n+1], mina[n+1];
	maxa[n]=mina[n]=n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}	
	for (int i = n - 1; i >= 1; i--) {
		if (a[i] > a[i + 1])
			mina[i] = mina[i + 1];
		else
			mina[i] = i;
		if (a[i] < a[i + 1])
			maxa[i] = maxa[i + 1];
		else
			maxa[i] = i;
		}
		for (int i = 1; i <= n; i++) {
			count = max(count, mina[maxa[i]] - i + 1);
		}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

