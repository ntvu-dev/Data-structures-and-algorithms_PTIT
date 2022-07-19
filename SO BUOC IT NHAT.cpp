#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

void loading() {
	int n;
	cin >> n;
	int a[n+1], b[n+1];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	memset(b,0,sizeof(b));
	b[0]=1;
	for(int i=1;i<n;i++) {
		b[i]=1;
		for(int j=0;j<i;j++) {
			if(a[j]<=a[i]) {
				b[i]=max(b[i],b[j]+1);
			}
		}
	}
	int res=*max_element(b,b+n);
	cout << n-res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

