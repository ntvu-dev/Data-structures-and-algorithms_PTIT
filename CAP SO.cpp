#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, dp[101];
struct p{
	int a, b;
};p arr[101];

bool cmp(p x, p y) {
	return x.a<y.a;
}

void loading() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		cin >> arr[i].a >> arr[i].b;
	}
	sort(arr+1,arr+n+1,cmp);
	memset(dp,0,sizeof(dp));
	dp[1]=1;
	for(int i=1;i<=n;i++) {
		for(int j=0;j<i;j++) {
			if(arr[i].a>arr[j].b) {
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	sort(dp,dp+n+1);
	cout << dp[n] << endl;
}
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

