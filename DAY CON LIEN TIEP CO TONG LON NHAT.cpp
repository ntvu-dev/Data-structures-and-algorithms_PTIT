#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, A[105];

void loading() {
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> A[i];
	}
	int res=-1e9+7, temp=0;
	for(int i=0;i<n;i++) {
		temp=0;
		for(int j=i;j<n;j++) {
			temp+=A[j];
			if(temp<0) {
				break;
			}
			else {
				res=max(res,temp);
			}
		}
	}
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		loading();
	}
}

