#include<bits/stdc++.h>
#include<algorithm>
#include<stack>

using namespace std;

int n, res, hang[21], cot[21], xuong[21], len[21];

void loading(int i) {
	for(int j=1;j<=n;j++) {
		if(!hang[j] && !cot[j] && !xuong[i-j+n] && !len[i+j-1]) {
			hang[j]=cot[j]=xuong[i-j+n]=len[i+j-1]=1;
			if(i==n) res++;
			else loading(i+1);
			hang[j]=cot[j]=xuong[i-j+n]=len[i+j-1]=0;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		res=0;
		cin >> n;
		loading(1);
		cout << res << endl;
	}
	return 0;
}

