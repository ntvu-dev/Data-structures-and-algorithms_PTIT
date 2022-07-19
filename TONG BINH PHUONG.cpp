#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	long long dp[n+1];
	for (int i = 0;i<=n; i++) {
		dp[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	cout << dp[n] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		loading();
	}
}


